
class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long original = n;
        long long power = 1;
        while(true) {
            long long sum = 0;
            long long temp = n;
            while(temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if(sum <= target) {
                return n - original;
            }
            power *= 10;
            n = (n / power + 1) * power;
        }
    }
};
