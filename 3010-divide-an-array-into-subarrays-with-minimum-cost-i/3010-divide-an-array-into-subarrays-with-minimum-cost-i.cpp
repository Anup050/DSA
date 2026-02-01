class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = nums[0];
        int fMin = INT_MAX;
        int sMin = INT_MAX;
        for(int i=1; i<nums.size(); i++){
            if(fMin > nums[i]){
                sMin = fMin;
                fMin = nums[i];
            }else if(sMin > nums[i] && fMin <= nums[i]){
                sMin = nums[i];
            }
        }
        return sum+fMin+sMin;
    }
};