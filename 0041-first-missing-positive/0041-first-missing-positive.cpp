class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0 || nums[i]>n) nums[i]=0;
        }
        for(int i=0;i<n;i++){
            int x=nums[i]%(n+1);
            if(x>0) nums[x-1]+=(n+1);
        }
        for(int i=0;i<n;i++){
            int x=nums[i]/(n+1);
            if(x<1) return i+1;
        }
        return n+1;
    }
};