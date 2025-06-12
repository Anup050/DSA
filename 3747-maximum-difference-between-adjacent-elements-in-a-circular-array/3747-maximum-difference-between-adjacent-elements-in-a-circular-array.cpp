class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int msum=0;
        int n=nums.size();
        for(int i=0;i<n+1;i++){
            msum=max(msum,abs(nums[i%n]-nums[(i+1)%n]));
        }
        return msum;
    }
};