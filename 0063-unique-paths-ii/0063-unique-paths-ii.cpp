class Solution {
public:
    int solve(vector<vector<int>> &dp, int i, int j, int m, int n, vector<vector<int>>& obstacleGrid){
         if(i==m || j==n || obstacleGrid[i][j] == 1) return 0;
        if(i== m-1 && j==n-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        int r = solve(dp,i+1,j,m,n,obstacleGrid);
        int d = solve(dp,i,j+1,m,n,obstacleGrid);
        return dp[i][j] = r + d;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(dp, 0, 0, m, n, obstacleGrid); 
    }
};