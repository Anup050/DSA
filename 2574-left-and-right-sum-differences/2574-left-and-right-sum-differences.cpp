class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> lsum(n);
        vector<int> rsum(n);

        for(int i=0; i<n-1; i++){
            lsum[i+1] = lsum[i]+nums[i];
        }
        for(int i=n-1; i>0; i--){
            rsum[i-1] = rsum[i]+nums[i];
        }
        for(int i=0; i<n; i++){
            ans[i] = abs(lsum[i] - rsum[i]);
        }
        return ans;
    }
};