class Solution {
public:
    int solve(string&s1,string&s2,vector<vector<int>>&dp,int i,int j,int n,int m){
        if(j>=m){
            if(i>=n) return 0;
            else return n-i;
        }
        if(i>=n){
            if(j>=m) return 0;
            else return m-j;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(s1[i]==s2[j]){
            return dp[i][j]=solve(s1,s2,dp,i+1,j+1,n,m);
        }
        else return dp[i][j]=1+min(solve(s1,s2,dp,i,j+1,n,m),min(solve(s1,s2,dp,i+1,j,n,m),solve(s1,s2,dp,i+1,j+1,n,m)));
    }
    int minDistance(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(text1,text2,dp,0,0,n,m);
    }
};