class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";
        vector<int> nums(n);
        int fact = 1;
        for(int i=1; i<n; i++) fact *= i;
        for(int i=1; i<=n; i++) nums[i-1] = i;
        k--;
        for(int i = n; i >= 1; i--) {
            int idx = k / fact;
            ans += to_string(nums[idx]);
            nums.erase(nums.begin() + idx);
            k %= fact;
            if(i > 1) fact /= (i - 1);
        }
        return ans;
    }
};