class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> ans;
        int row=grid.size();
        int col=grid[0].size(); 
        for(int i=0; i<col; i++){
            int n = 0;
            for(int j=0; j<row; j++){
                string str = to_string(grid[j][i]);
                int m = str.length();
                n = max(n,m);
            }
            ans.push_back(n);
        }
        return ans;
    }
};