class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int l,r=0;
        bool flag = true;
        for(int i=0; i<nums.size(); i++){
            if(isPrime(nums[i])){
                if(flag){
                    l=r=i;
                    flag = false;
                }else{
                    r = i;
                }
            }
        }
        return abs(r-l);
    }
};