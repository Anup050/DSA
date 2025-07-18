class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0; i<m*n; i++){
            if(grid[i/n][i%n] < 0) count++;
        }
        return count;
    }
};