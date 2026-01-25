class Solution {
public:
    bool isPrime(int x){
        if(x<2) return false;
        for(int i=2; i*i<=x; i++){
            if(x%i==0) return false;
        }
        return true;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> v;
        if(n<4) return v;
        int l = 1;
        int m = n-1;
        while(l<=m){
            if(isPrime(l) && isPrime(m)) v.push_back({l,m});
            l++;
            m--;
        }
        return v;
    }
};