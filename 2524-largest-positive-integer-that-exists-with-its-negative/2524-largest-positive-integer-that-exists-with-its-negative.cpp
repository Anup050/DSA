class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        while(i<j){
            if(nums[i] > 0){
                return -1; 
            }
            if(abs(nums[i]) == nums[j]) return nums[j];
            else if(abs(nums[i]) < nums[j]){
                j--;
            }else{
                i++;
            }
        }
        return -1;
    }
};