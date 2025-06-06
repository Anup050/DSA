class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> v;
        for(int i=1; i<=n; i++){
            vector<int> row(i);
            v.push_back(row);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if(j == 0 || j == i){
                    v[i][j] = 1;
                }else{
                    v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
            }
        }
        return v;
    }
};