
class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        auto bremovilta = nums;
        long long ans = 0;
        vector<long long> gains;
        for (int x : bremovilta) {
            ans += x;
            string s = to_string(x);
            sort(s.rbegin(), s.rend());
            long long mx = stoll(s);
            if (mx > x) {
                gains.push_back(mx - x);
            }
        }
        sort(gains.rbegin(), gains.rend());
        for (int i = 0; i < min(k, (int)gains.size()); i++) {
            ans += gains[i];
        }
        return ans;
    }
};
