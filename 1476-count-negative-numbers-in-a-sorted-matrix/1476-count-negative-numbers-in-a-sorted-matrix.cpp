class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        // for(int i=0; i<m*n; i++){
        //     if(grid[i/n][i%n] < 0) count++;
        // }
        // return count;
        int i = m - 1;
        int j = 0;

        while (i >= 0 && j < n) {
            if (grid[i][j] < 0) {
                count += n - j;
                i--;
            } else {
                j++;
            }
        }
        return count;
    }
};