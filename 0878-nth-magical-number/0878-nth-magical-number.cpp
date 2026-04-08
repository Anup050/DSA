class Solution {
public:
    int gcd(int a, int b){
        while(b){
            a = a % b;
            swap(a, b);
        }
        return a;
    }
    int nthMagicalNumber(int n, int a, int b) {
        int M = 1e9+7;
        long long l = min(a,b);
        long long h = (long)n * min(a,b);
        int lcm = (a*b/gcd(a,b));
        while(l<h){
            long long m = l + (h-l)/2;
            if((m/a + m/b - m/lcm) < n) l = m+1;
            else h = m;
        }
        return l%M;
    }
};