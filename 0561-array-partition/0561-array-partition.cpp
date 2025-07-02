class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int sum = 0;
        int i=0,j=1;
        while(j<n){
            sum += min(nums[i],nums[j]);
            i += 2;
            j += 2;
        }
        return sum;
    }
};