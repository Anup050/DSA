class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n <= 1) return 0;
        sort(nums.begin(),nums.end());
        int diff = INT_MAX;
        int i=0,j=k-1;
        while(j<n){
            diff = min(diff,nums[j]-nums[i]);
            i++;
            j++;
        }
        return diff;
    }
};