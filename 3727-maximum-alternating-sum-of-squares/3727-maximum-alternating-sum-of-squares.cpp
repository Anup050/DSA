class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i] *= nums[i]; 
        }
        sort(begin(nums),end(nums));
        int s = nums.size()/2;
        long long st = 0, ed = 0;
        for(int i=0; i<s; i++){
            st += nums[i];
        }
        for(int i=s; i<nums.size(); i++){
            ed += nums[i];
        }
        return ed-st;
    }
};