class Solution {
public:
    long long removeZeros(long long n) {
        long long rev = 0;
        while(n){
            long long digit = n%10;
            if(digit > 0) rev = (rev*10) + digit;
            n /= 10;
        }
        long long ans = 0;
        while(rev){
            int digit = rev%10;
            ans = (ans*10) + digit;
            rev /= 10;
        }
        return ans;
    }
};