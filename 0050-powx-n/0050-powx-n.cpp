class Solution {
public:

    double helper(double x, long n){
        if(n == 0) return 1;
        if(n%2 == 0){
            double half = helper(x, n/2);
            return half*half;
        }else{
            return x * helper(x, n-1);
        }
        
    }
    double myPow(double x, int n) {
        long p = abs((long)n);
        double ans = helper(x, p);
        if(n<0) return 1/ans;
        return ans;
    }
};