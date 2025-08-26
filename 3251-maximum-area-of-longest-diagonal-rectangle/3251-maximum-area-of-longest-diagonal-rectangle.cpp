class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int mArea = 0;
        int maxD = 0;
        int m = dimensions.size();
        for(int i=0; i<m; i++){
            int l = dimensions[i][0];
            int b = dimensions[i][1];

            int d = ((l*l)+(b*b));
            if(maxD < d){
                maxD = d;
                mArea = l*b;
            }else if(maxD == d){
                mArea = max(mArea, l*b);
            }
        }
        return mArea;
    }
};