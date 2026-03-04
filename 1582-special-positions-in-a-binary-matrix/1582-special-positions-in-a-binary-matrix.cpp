class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for(int i=0; i<mat.size(); i++){
            int f = 0;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    f++;
                    for(int k=0; k <mat.size(); k++){
                        if(mat[k][j] == 1) f++;
                    }
                }
            }
            if(f == 2) count++;
        }
        return count;
    }
};