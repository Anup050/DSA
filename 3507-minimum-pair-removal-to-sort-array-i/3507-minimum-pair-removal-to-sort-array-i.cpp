class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while(1){
            if(is_sorted(begin(nums),end(nums))) break;
            int minPairSum = INT_MAX;
            int idx = 0;
            for(int i=1; i<nums.size(); i++){
                int sum = nums[i] + nums[i-1];
                if(sum < minPairSum){
                    minPairSum = sum;
                    idx = i-1;
                }
            }
            nums[idx] = minPairSum;
            nums.erase(begin(nums)+idx+1);
            count++;
        }
        return count;
    }
};