class Solution {
public:
    int solve(vector<int> &prices, int idx, int n, vector<vector<int>> &dp, int buy, int fee){
        if(idx == n) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        int profit = 0;
        if(buy == 1){
            profit += max(solve(prices, idx+1, n, dp, 0, fee) - prices[idx], solve(prices, idx+1, n, dp, 1, fee));
        }else{
             profit += max(solve(prices, idx+1, n, dp, 1, fee) + prices[idx] - fee, solve(prices, idx+1, n, dp, 0, fee));
        }
        return dp[idx][buy] = profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2,-1));
        return solve(prices, 0, n, dp, 1, fee);
    }
};