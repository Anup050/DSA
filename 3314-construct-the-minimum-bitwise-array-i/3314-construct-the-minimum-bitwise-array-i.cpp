class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);

        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            for(int j = 1; j<=num; j++){
                int n = j | (j+1);
                if(n == num){
                    ans[i] = j;
                    break;
                }
            }
        }
        return ans;
    }
};