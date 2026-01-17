class Solution {
public:
    const int mod = 1e9 + 7;
    long long power(int a, long long b){
        if(b == 0) return 1;
        long long half = power(a, b/2);
        long long result = (half * half)%mod;
        if(b%2==1) result = (result * a)%mod;
        return result;
    }
    int countGoodNumbers(long long n) {
        return (long long)power(5,(n+1)/2)*power(4,n/2)%mod;
    }
};