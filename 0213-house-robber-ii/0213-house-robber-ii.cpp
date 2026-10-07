class Solution {
public:
    int solve(vector<int>&nums,int i,int n){
        int a = nums[i];
        int b = max(nums[i+1],nums[i]);
        for(int j=i+2; j<=n; j++){
            int c = max(b, a+nums[j]);
            a = b;
            b = c;
        }
        return b;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n == 1) return nums[0];
        else if(n == 2) return max(nums[0], nums[1]);
        int left=solve(nums,0, n-2);
        int right=solve(nums,1, n-1);
        return max(left,right);
    }
};