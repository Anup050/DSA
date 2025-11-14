class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> mat(n, vector<int>(n,0));
        // for(int i=0; i<queries.size(); i++){
        //     int r1 = queries[i][0];
        //     int c1 = queries[i][1];
        //     int r2 = queries[i][2];
        //     int c2 = queries[i][3];
        //     for(int j=r1; j <=r2; j++){
        //         for(int k=c1; k<=c2; k++){
        //             mat[j][k] += 1;
        //         }
        //     }
        // }
        for(auto &query : queries){
            int r1 = query[0];
            int c1 = query[1];
            int r2 = query[2];
            int c2 = query[3];
            for(int i=r1; i<=r2; i++){
                mat[i][c1] += 1;
                if(c2+1<n){
                    mat[i][c2+1] -= 1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                mat[i][j] += mat[i][j-1];
            }
        }
        return mat;
    }
};