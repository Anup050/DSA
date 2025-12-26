class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int mS = INT_MIN;
        int i=0,j=nums.size()-1;
        sort(begin(nums),end(nums));
        while(i<j){
            mS = max(mS,nums[i]+nums[j]);
            i++;
            j--;
        }
        return mS;
    }
};