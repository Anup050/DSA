class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        int start=0,end=nums.size()-1;
        while(start<end){
            int sum = nums[start]+nums[end];
            if(sum == target){
                res.push_back(start+1);
                res.push_back(end+1);
                return res;
            }else if( sum > target){
                end--;
            }else{
                start++;
            }
        }
        return res;
    }
};