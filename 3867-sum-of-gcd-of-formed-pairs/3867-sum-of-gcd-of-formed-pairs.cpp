class Solution {
public:
    long long gcd(long long a, long long b){
        while(b){
            a=a%b;
            swap(a,b);
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int hN = nums[0];
        for(int i=0; i<n; i++){
            hN = max(hN, nums[i]);
            prefixGcd[i] = gcd(nums[i], hN);
        }
        sort(begin(prefixGcd), end(prefixGcd));
        long long sum = 0;
        int i=0,j=n-1;
        while(i<j){
            sum += gcd(prefixGcd[i++],prefixGcd[j--]);
        }
        return sum;
    }
};