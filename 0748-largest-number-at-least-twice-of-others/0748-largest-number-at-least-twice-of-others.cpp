class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int num = -1;
        int maxi = INT_MIN;
        int sec = INT_MIN;
        int index = 0;
        for(int i=0; i<n; i++){
            if(nums[i]>maxi){
                sec = maxi;
                maxi = nums[i];
                index = i;
            }else if(sec<nums[i] && nums[i]<maxi){
                sec = nums[i];
            }
        }
        if(maxi>=2*sec) num = index;
        return num;
        
    }
};