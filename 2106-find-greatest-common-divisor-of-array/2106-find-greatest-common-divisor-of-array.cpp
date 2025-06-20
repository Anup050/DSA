class Solution {
public:

    int hcf(int mini, int maxi){
        if(maxi == 0) return mini;
        return hcf(maxi, mini%maxi);
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
        int gcd = hcf(mini,maxi);
        return gcd;
    }
};