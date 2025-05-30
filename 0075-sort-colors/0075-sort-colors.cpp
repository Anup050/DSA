class Solution {
public:
    void sortColors(vector<int>& nums) {

        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i; j<nums.size(); j++){
        //         if(nums[i] > nums[j]){
        //             swap(nums[i], nums[j]);
        //         }
        //     }
        // }
        // for (int i = 0; i < nums.size(); i++) {

        //     for (int j = 0; j < nums.size() - i - 1; j++) {
        //         if (nums[j] > nums[j + 1]) {
        //             swap(nums[j], nums[j + 1]);
        //         }
        //     }
        // }

        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {  // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }


    }
};