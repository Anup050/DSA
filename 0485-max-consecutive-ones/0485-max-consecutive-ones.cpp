class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne = 0;
        int count = 0;
        for(int i : nums){
            if(i == 1){
                count++;
                maxOne = max(maxOne, count);
            }else{
                count = 0;
            }
        }
        return maxOne;
    }
};