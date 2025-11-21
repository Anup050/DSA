class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(int i : nums) mp[i]++;
        int n = nums.size();
        while(n){
            vector<int> v;
            for(auto &i : mp){
                if(i.second>0) {
                    v.push_back(i.first);
                    i.second--;
                    n--;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};