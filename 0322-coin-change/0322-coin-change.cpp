
class Solution {
public:
    int solve(vector<int>& arr, int amt,
        vector<vector<int>>& dp, int i, int n) {
        if(amt == 0) return 0;
        if(i == n-1) {
            if(amt % arr[i] == 0)
                return amt / arr[i];
            return 1e9;
        }
        if(dp[i][amt] != -1)
            return dp[i][amt];
        int take = 1e9;
        if(amt >= arr[i]) {
            take = 1 + solve(arr, amt-arr[i], dp, i, n);
        }
        int notake = solve(arr, amt, dp, i+1, n);

        return dp[i][amt] = min(take, notake);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        if(amount == 0) return 0;
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        int ans = solve(coins, amount, dp, 0, n);
        return ans >= 1e9 ? -1 : ans;
    }
};
