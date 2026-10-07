class Solution {
public:
    // int fun(int n, vector<int> &dp){
    //     if(n <= 2) return n;
    //     if(dp[n] != -1) return dp[n];
    //     return dp[n]=fun(n-1, dp) + fun(n-2, dp);
    // }
    int climbStairs(int n) {
        //Memoization
        // vector<int> dp(n+1, -1);
        // return fun(n, dp);

        //tabulation
        if(n == 1) return n;
        int prev2 = 1, prev1 = 2;
        for(int i=3; i<=n; i++){
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};