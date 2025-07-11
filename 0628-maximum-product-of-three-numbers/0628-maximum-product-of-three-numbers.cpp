class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long max1 = nums[0]*nums[1]*nums[n-1];
        long max2 = nums[n-3]*nums[n-2]*nums[n-1];
        
        return max(max1,max2);
    }
};