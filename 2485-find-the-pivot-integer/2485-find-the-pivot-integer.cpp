class Solution {
public:
    int pivotInteger(int n) {
        int x = -1;
        int preSum1 = 0;
        for(int i=1; i<=n; i++){
            preSum1 += i;
        }
        int preSum2 = 0;
        for(int i=1; i<=n; i++){
            preSum2 += i;
            if(preSum2 == preSum1) {
                x = i;
                return x;
            }else{
                preSum1 -= i;
            }
        }
        return x;
    }
};