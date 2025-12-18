class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        vector<int> R(m);
        vector<int> C(n);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    R[i]++;
                    C[j]++;
                }
            }
        }        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i][j] = R[i]+C[j]-(n-R[i])-(m-C[j]);
            }
        }
        return ans;
    }
};
