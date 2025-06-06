class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<vector<int>> v;
        for(int i=1; i<=n+1; i++){
            vector<int> row(i);
            v.push_back(row);
        }

        for(int i=0; i<=n; i++){
            for(int j=0; j<=i; j++){
                if(j == 0 || j == i){
                    v[i][j] = 1;
                }else{
                    v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
            }
        }
        vector<int> ans(n+1);
        for(int i=0; i<=n; i++){
            ans[i] = v[n][i];
        }
        return ans;
    }
};