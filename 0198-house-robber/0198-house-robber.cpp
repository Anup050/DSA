class Solution {
public:
    int fun(vector<int> &nums, vector<int> &dp, int n){
        if(n==0) return nums[0];
        if(n==1) return max(nums[0],nums[1]);
        if(dp[n] != -1) return dp[n];

        return dp[n]=max(fun(nums,dp,n-1),nums[n]+fun(nums,dp,n-2));
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);

        int ans=fun(nums, dp, n-1);
        return ans;
    }
};