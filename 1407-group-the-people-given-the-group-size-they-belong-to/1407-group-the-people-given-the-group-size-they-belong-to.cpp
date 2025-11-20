class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> v;
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<groupSizes.size(); i++){
            mp[groupSizes[i]].push_back(i);
        }
        for(auto &i : mp){
           if(i.first == i.second.size()) v.push_back(i.second);
           else{
            int n = i.second.size();
            int j=0;
            while(j<n){
                vector<int> ans;
                int m = i.first;
                while(m--){
                    ans.push_back(i.second[j++]);
                }
                v.push_back(ans);
            }
           }
        }
        return v; 
    }
};