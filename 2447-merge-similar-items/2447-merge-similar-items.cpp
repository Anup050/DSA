class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> v;
        unordered_map<int,int> mp;
        for(int i=0; i<items2.size(); i++){
            mp[items2[i][0]] = items2[i][1];
        }
        for(int i=0; i<items1.size(); i++){
            if(mp.find(items1[i][0]) != mp.end()){
                v.push_back({items1[i][0], items1[i][1]+mp[items1[i][0]]});
            }else{
                v.push_back({items1[i][0], items1[i][1]});
            }
        }
        unordered_map<int,int> mp1;
        for(int i=0; i<items1.size(); i++){
            mp1[items1[i][0]] = items1[i][1];
        }
        for(int i=0; i<items2.size(); i++){
            if(mp1.find(items2[i][0]) == mp1.end()){
                v.push_back({items2[i][0], items2[i][1]});
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};