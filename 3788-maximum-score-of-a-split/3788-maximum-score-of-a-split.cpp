class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long maxS = LLONG_MIN;
        int n = nums.size();
        vector<long long> p(n);
        vector<long long> s(n);
        p[0] = nums[0];
        for(int i = 1; i < n; i++){
            p[i] = p[i-1] + nums[i];
        }
        s[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            s[i] = min(s[i+1], (long long)nums[i]);
        }
         for (int i = 0; i < n - 1; i++) {
            maxS = max(maxS, p[i] - s[i + 1]);
        }
        return maxS;
    }
};
