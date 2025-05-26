class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        //O(n) : Time
        // for (int i = 0; i < n; i++) {
        //     if ((i == 0 || nums[i] > nums[i - 1]) && (i == n - 1 || nums[i] > nums[i + 1])) {
        //         return i;
        //     }
        // }
        
        //O(log n) : Time
       int l = 0, h = nums.size() - 1;
       while (l < h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] > nums[mid + 1]) {
                h = mid;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }
};