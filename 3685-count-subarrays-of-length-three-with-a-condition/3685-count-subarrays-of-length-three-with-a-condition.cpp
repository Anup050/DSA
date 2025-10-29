class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;
        for(int i=2; i<nums.size(); i++){
            float a = nums[i-2]+nums[i];
            float b = nums[i-1]/2.0;
            if(a == b) count++;
        }
        return count;
    }
};