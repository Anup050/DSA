class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        // int count = 0;
        // for(int i=0; i<mat.size(); i++){
        //     int f = 0;
        //     for(int j=0; j<mat[i].size(); j++){
        //         if(mat[i][j] == 1){
        //             f++;
        //             for(int k=0; k <mat.size(); k++){
        //                 if(mat[k][j] == 1) f++;
        //             }
        //         }
        //     }
        //     if(f == 2) count++;
        // }
        // return count;
        int n = mat.size();
        int m = mat[0].size();
        vector<int> r(n, 0);
        vector<int> c(m, 0);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 1 && r[i] == 1 && c[j] == 1) count++;
            }
        }
        return count;
    }
};