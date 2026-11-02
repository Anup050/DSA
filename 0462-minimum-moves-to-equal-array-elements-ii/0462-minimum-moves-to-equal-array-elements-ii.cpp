class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0;
        sort(begin(nums), end(nums));
        int mid = nums.size()/2;
        for(int i : nums){
            ans += (abs(nums[mid]- i));
        }
        return ans;
    }
};