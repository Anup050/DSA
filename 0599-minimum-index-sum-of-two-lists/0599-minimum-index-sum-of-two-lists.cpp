class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        vector<string> str;
        for(int i=0; i<list1.size(); i++){
            mp[list1[i]] = i;
        }
        int m = INT_MAX;
        for(int i=0; i<list2.size(); i++){
           if(mp.find(list2[i]) != mp.end()){
                m = min(m,i+mp[list2[i]]);
           }
        }
        for(int i=0; i<list2.size(); i++){
           if(mp.find(list2[i]) != mp.end()){
                if(i+mp[list2[i]] == m) str.push_back(list2[i]);
           }
        }
        return str;
    }
};