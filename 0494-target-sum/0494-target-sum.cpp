class Solution {
public:
    int solve(vector<int> &nums, int target, int n, int i){
        if(i == n) return target == 0;
        return solve(nums, target - nums[i], n, i+1) + solve(nums, target + nums[i], n, i+1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return solve(nums, target, n, 0);
    }
};