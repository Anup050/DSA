class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        if(k==0) return nums.size();
        int count = 0;
        int n = nums.size();
        int q = nums[n-k];
        for(int i=0; i<n; i++){
            if (nums[i]<q){
                count++;
            }
        }
        return count;
    }
};