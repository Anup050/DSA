class Solution {
public:
    int mirrorDistance(int n) {
        long long rev = 0;
        long long num = n;
        while(num){
            rev = (rev*10) + (num%10);
            num /= 10;
        }
        return abs(n - rev);
    }
};