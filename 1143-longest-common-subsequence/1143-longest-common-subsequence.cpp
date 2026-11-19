class Solution {
public:
    int solve(string&s1,string&s2,vector<vector<int>>&dp,int i,int j,int n,int m){
        if(i>=n or j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(s1[i]==s2[j]){
            return dp[i][j]=1+solve(s1,s2,dp,i+1,j+1,n,m);
        }
        else return dp[i][j]=max(solve(s1,s2,dp,i+1,j,n,m),solve(s1,s2,dp,i,j+1,n,m));


    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));

        return solve(text1,text2,dp,0,0,n,m);
    }
};