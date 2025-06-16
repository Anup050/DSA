class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = -1;
        // for(int i=0; i<n-1; i++){
        //    for(int j=i+1; j<n; j++){
        //         if(nums[i] < nums[j]){
        //             maxDiff = max(maxDiff,nums[j] - nums[i]);
        //         }
        //    }
        // }
        int mini = nums[0];
        for(int i=1; i<n; i++){
           int diff = nums[i]-mini;
           if(diff>0){
                maxDiff = max(diff,maxDiff);
           }
           mini = min(mini,nums[i]);
        }
        return maxDiff;
    }
};