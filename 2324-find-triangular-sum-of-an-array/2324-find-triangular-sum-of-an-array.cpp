class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        while(nums.size()>1){
           vector<int> newNums;
           int n = nums.size();
           int i=1;
           while(i<n){
            int a = nums[i-1];
            int b = nums[i];
            newNums.push_back((a+b)%10);
            i++;
           }
           nums = newNums;
        }
        return nums[0];
    }
};