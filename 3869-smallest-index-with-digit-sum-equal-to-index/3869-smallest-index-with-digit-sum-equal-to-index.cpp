class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int index = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            int n = nums[i];
            while(n){
                sum += n%10;
                n /= 10;
            }
            if(sum == i){
                index = min(index,i);
            }
        }
        return (index == INT_MAX) ? -1 : index;
    }
};