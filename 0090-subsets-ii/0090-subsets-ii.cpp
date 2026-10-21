class Solution {
public:
    void solve(set<vector<int>> &s, vector<int> & res, vector<int> & nums, int idx,int n){
        if(idx == n){
            s.insert(res);
            return;
        }
        bool flag = true;
        res.push_back(nums[idx]);
        solve(s, res, nums, idx+1, n);
        res.pop_back();
        solve(s, res, nums, idx+1, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>> ans;
        vector<int> res;
        int n = nums.size();
        set<vector<int>> s;
        solve(s, res, nums, 0, n);
        for(auto i : s){
            ans.push_back(i);
        }
        return ans;
    }
};