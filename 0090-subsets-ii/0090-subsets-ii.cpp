class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &res, vector<int> &nums, int idx,int n){
        ans.push_back(res);
        for(int i=idx; i<n; i++){
            if(i != idx && nums[i] == nums[i-1]) continue;
            res.push_back(nums[i]);
            solve(ans, res, nums, i+1, n);
            res.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>> ans;
        vector<int> res;
        int n = nums.size();
        solve(ans, res, nums, 0, n);
        return ans;
    }
};