class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int j = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                if(i-j-1 < k && i != j && nums[j] == 1){
                    return false;
                }else{
                    j = i;
                }
            }
        }
        return true;
    }
};