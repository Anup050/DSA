class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> v(k,0);
        unordered_map<int,unordered_set<int>> mp;
        for(auto i : logs){
            vector<int> ans = i;
            int id = ans[0];
            int t = ans[1];
            mp[id].insert(t);
        }

        for(auto i : mp){
            v[i.second.size()-1] += 1;
        }
        return v;
    }
};