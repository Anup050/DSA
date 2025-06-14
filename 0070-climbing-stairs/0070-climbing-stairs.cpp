class Solution {
public:
    int help(vector<int> &fre,int n){
        if(fre[n]!=-1) return fre[n];
        if(n==1) return 1;
        if(n==2) return 2;
        int ans=help(fre,n-1)+help(fre,n-2);
        fre[n]=ans;
        return ans;
    }
    int climbStairs(int n) {
        vector<int> fre(n+1,-1);
        return help(fre,n);
    }
};