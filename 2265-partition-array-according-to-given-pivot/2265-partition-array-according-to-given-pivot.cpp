class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // int i=nums.size()-1;
        // int index = nums.size()-1;
        // while(i>=0){
        //     if(nums[i] > pivot){
        //         swap(nums[i], nums[index]);
        //         index--;
        //     }else if(nums[i] == pivot){

        //     }
        //     i--;
        // }
        // return nums;
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i : nums){
            if(i < pivot){
                v1.push_back(i);
            }else if(i == pivot){
                v2.push_back(i);
            }
            else{
                v3.push_back(i);
            }
        }
        vector<int> v4;
        for(int i : v1){
            v4.push_back(i);
        }
        for(int i : v2){
            v4.push_back(i);
        }
        for(int i : v3){
            v4.push_back(i);
        }
        return v4;
    }
};