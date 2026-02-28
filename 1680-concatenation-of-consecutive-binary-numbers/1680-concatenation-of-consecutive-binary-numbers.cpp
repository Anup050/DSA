class Solution {
public:
    int M = 1e9+7;
    int concatenatedBinary(int n) {
        long res = 0;
        int digits = 0;
        for(int i = 1; i <= n; i++) {
            if((i & (i-1)) == 0) digits++;
            res = ((res << digits)%M + i)%M;
        }
        return res;
    }
};