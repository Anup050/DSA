class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        vector<int> result(nums.size());
        int index = nums.size()-1;
        while(start<=end){
            if((nums[start]*nums[start])>(nums[end]*nums[end])){
                result[index] = nums[start]*nums[start];
                start++;
            }else{
                result[index] = nums[end]*nums[end];
                end--;
            }
            index--;
        }
        return result;
    }
};