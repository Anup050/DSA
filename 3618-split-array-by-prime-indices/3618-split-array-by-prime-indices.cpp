class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long a = 0;
        long long b = 0;
        for(int i=0; i<nums.size(); i++){
            if(isPrime(i)) a += nums[i];
            else b += nums[i];
        }
        return abs(a - b);
    }
};