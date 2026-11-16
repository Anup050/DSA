
class Solution {
public:
    const int MOD = 1e9 + 7;
    int minimumPossibleSum(int n, int target) {
        long long a = min(n, target / 2);
        long long b = n - a;
        long long sum1 = a * (a + 1) / 2;
        long long sum2 = b * (2LL * target + b - 1) / 2;
        return (sum1 % MOD + sum2 % MOD) % MOD;
    }
};
