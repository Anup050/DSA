class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msum = INT_MIN;
        int csum = 0;
        for(int i : nums){
            csum += i;
            msum = max(msum,csum);
            if(csum < 0){
                csum = 0;
            }
        }
        return msum;
    }
};