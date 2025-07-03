class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int i=0;
        while(i<n){
            sum += mat[i][i];
            if(i != n-i-1){
                sum += mat[i][n-i-1];
            }
            i++;
        }
        return sum;
    }
};