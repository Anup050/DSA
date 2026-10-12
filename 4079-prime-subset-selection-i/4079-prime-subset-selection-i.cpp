class Solution {
public:
    bool isPrime(int n){
        for(int i=2; i*i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int> v;
        int sum = 0;
        int i = 2;
        while(i<=n){
            if(isPrime(i)){
                sum += i;
                if(sum <= s){
                    v.push_back(i);
                }else{
                    break;
                }
            }
            i++;
        }
        return v;
    }
};