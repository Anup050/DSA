class Solution {
public:
    int solve(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j, int n){
        if(i == n || j == n || j < 0) return 1e9;
        if(i == n-1) return matrix[i][j];
        if(dp[i][j] != 1e9) return dp[i][j];
        int a = solve(matrix, dp, i+1, j-1, n);
        int b = solve(matrix, dp, i+1, j, n);
        int c = solve(matrix, dp, i+1, j+1, n);
        return dp[i][j] = min({a, b, c}) + matrix[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, 1e9));
        int minSum = INT_MAX;
        for(int i=0; i<n; i++){
            minSum = min(minSum, solve(matrix, dp, 0, i, n));
        }
        return minSum;
    }
};