class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        sort(nums.begin(),nums.end());
        int  i=0,j=1;
        while(j<n){
            arr[i] = nums[j];
            arr[j] = nums[i];
            i += 2;
            j += 2;
        }
        return arr;
    }
};