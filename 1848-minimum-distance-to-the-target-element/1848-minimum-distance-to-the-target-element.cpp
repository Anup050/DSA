class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i=0;
        int ans = INT_MAX;
        while(i<nums.size()){
            if(nums[i] == target){
                ans = min(ans, abs(i - start));
            }
            i++;
        }
        return ans;
    }
};