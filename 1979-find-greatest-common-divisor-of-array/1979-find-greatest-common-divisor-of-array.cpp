class Solution {
public:
    int hcf(int a, int b){
        while(b != 0) {
            a = a % b;
            swap(a,b);
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
        return gcd(mini,maxi);
    }
};