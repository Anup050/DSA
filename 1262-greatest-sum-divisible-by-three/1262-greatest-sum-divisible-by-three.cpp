class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp = {0, INT_MIN, INT_MIN};  
        for (int x : nums) {
            vector<int> cur = dp;
            for (int r = 0; r < 3; r++) {
                int nr = (r + x) % 3;
                cur[nr] = max(cur[nr], dp[r] + x);
            }
            dp = cur;
        }
        return dp[0];
    }
};
