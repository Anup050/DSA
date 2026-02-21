class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int i=left; i<=right; i++){
            int n = i;
            int count = 0;
            while(n){
                count += n & 1;
                n >>= 1;
            }
            if(isPrime(count)) res++;
        }
        return res;
    }
};