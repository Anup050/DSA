class Solution {
public:
    bool checkGoodInteger(int n) {
        long long dSum= 0;
        long long dSSum = 0;
        while(n){
            dSum += (n%10);
            dSSum += ((n%10)*(n%10));
            n /= 10;
        }
        return ((dSSum - dSum) >= 50) ? true : false;
    }
};