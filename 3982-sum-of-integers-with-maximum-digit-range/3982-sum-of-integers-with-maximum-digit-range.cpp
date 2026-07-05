class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int sum = 0;
        int mxSum = 0;
        vector<int> v(nums.size(), 0);
        for(int i=0; i<nums.size(); i++){
            int mx = INT_MIN;
            int mn = INT_MAX;
            int n = nums[i];
            while(n){
                mx = max(mx, n%10);
                mn = min(mn, n%10);
                n /= 10;
            }
            v[i] = mx-mn;
            mxSum = max(mxSum, v[i]);
        }
        for(int i=0; i<v.size(); i++){
            if(v[i] == mxSum) sum += nums[i];
        }
        return sum;
    }
};