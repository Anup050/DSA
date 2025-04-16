class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true, decreasing = true;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) 
                decreasing = false;  // Not decreasing
            if (nums[i] < nums[i - 1]) 
                increasing = false;  // Not increasing
        }

        return increasing || decreasing;  // If either is true, array is monotonic
    }
};
