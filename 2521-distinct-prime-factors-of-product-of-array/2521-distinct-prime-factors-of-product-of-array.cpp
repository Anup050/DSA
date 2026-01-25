class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> s;
        int count = 0;
        for(int i : nums){
            for(int j=2; j<=i; j++){
                if(i%j==0 && isPrime(j)) s.insert(j);
            }
        }
        return s.size();
    }
};