class Solution {
public:
    static constexpr long long MOD = 1'000'000'007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> prefCnt(n + 1, 0);
        vector<long long> prefSum(1, 0);
        vector<long long> prefVal(1, 0);
        vector<long long> pow10(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            pow10[i] = (pow10[i - 1] * 10) % MOD;
        }
        for (int i = 0; i < n; i++) {
            prefCnt[i + 1] = prefCnt[i];
            if (s[i] != '0') {
                int d = s[i] - '0';
                prefCnt[i + 1]++;
                prefSum.push_back(prefSum.back() + d);
                prefVal.push_back(
                    (prefVal.back() * 10 + d) % MOD
                );
            }
        }
        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];
            int L = prefCnt[l];
            int R = prefCnt[r + 1] - 1;

            if (L > R) {
                ans.push_back(0);
                continue;
            }

            long long digitSum =
                prefSum[R + 1] - prefSum[L];

            int len = R - L + 1;

            long long num =
                (prefVal[R + 1]
                - prefVal[L] * pow10[len]) % MOD;

            if (num < 0) num += MOD;

            ans.push_back((num * (digitSum % MOD)) % MOD);
        }

        return ans;
    }
};