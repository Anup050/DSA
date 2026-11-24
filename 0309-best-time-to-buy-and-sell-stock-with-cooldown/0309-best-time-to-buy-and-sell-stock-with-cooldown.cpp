class Solution {
public:
    int solve(vector<int> &prices, int idx, int n, vector<vector<int>> &dp, int buy){
        if(idx >= n) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        int profit = 0;
        if(buy == 1){
            profit += max(solve(prices, idx+1, n, dp, 0) - prices[idx], solve(prices, idx+1, n, dp, 1));
        }else{
             profit += max(solve(prices, idx+2, n, dp, 1) + prices[idx], solve(prices, idx+1, n, dp, 0));
        }
        return dp[idx][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2,-1));
        return solve(prices, 0, n, dp, 1);
    }
};