class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> & res, vector<int> & nums, int idx,int n){
        if(idx == n){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[idx]);
        solve(ans, res, nums, idx+1, n);
        res.pop_back();
        solve(ans, res, nums, idx+1, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        int n = nums.size();
        solve(ans, res, nums, 0, n);
        return ans;
    }
};