class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> res(n, vector<int>(m));
        k %= m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                res[i][j] = mat[i][j];
            }
            if(i%2==0){
                reverse(begin(res[i]),end(res[i]));
                reverse(begin(res[i]),begin(res[i])+k);
                reverse(begin(res[i])+k,end(res[i]));
            }else{
                reverse(begin(res[i]),begin(res[i])+k);
                reverse(begin(res[i])+k,end(res[i]));
                reverse(begin(res[i]),end(res[i]));
            }
        }
        return mat == res;
    }
};