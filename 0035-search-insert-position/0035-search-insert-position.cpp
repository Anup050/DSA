class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        
        if(target < nums[0]) return 0;
        else if(target > nums[n-1]) return n;

        int start = 0, end = n-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if((nums[mid] == target) || (nums[mid] > target && nums[mid-1] < target)){
                return mid;
            }else if(nums[mid] > target) {
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        }
        return -1;
    }
};