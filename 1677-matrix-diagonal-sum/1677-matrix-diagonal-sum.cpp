class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int i=0,j=0,k=n-1;

        while(i<n && j<n && k>=0){
            sum += mat[i][j];
            if(i != k){
                sum += mat[i][k];
            }
            i++;
            j++;
            k--;
        }
        return sum;
    }
};