class Solution {
public:
    int solve(vector<int> &prices, int idx, int n, vector<vector<vector<int>>> &dp, int buy, int tr){
        if(idx == n || tr == 0) return 0;
        if(dp[idx][buy][tr] != -1) return dp[idx][buy][tr];
        int profit = 0;
        if(buy == 1){
            profit += max(solve(prices, idx+1, n, dp, 0, tr) - prices[idx], solve(prices, idx+1, n, dp, 1, tr));
        }else{
             profit += max(solve(prices, idx+1, n, dp, 1, tr-1) + prices[idx], solve(prices, idx+1, n, dp, 0, tr));
        }
        return dp[idx][buy][tr] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(k+1, -1)));
        return solve(prices, 0, n, dp, 1, k);
    }
};