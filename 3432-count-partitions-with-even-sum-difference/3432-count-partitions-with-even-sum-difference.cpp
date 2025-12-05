class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int prefixSum1 = 0;
        int prefixSum2 = 0;
        int count = 0;
        for(int i : nums) prefixSum1 += i;
        for(int i=0; i<nums.size()-1; i++){
            prefixSum2 += nums[i];
            prefixSum1 -= nums[i];
            if((prefixSum2-prefixSum1)%2 == 0) count++;
        }
        return count;
    }
};