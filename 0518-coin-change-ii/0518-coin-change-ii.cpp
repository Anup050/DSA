class Solution {
public:
    int solve(vector<int> &arr,int amt,vector<vector<int>>&dp,int i,int n){
        if(amt==0) return 1;
        //if(amt<0) return 0;
        if(i>=n){
            return 0;
        }
        if(dp[i][amt]!=-1) return dp[i][amt];
        if(amt<arr[i]){
            return dp[i][amt]=solve(arr,amt,dp,i+1,n);
        }
        
        return dp[i][amt]=solve(arr,amt-arr[i],dp,i,n)+solve(arr,amt,dp,i+1,n);
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return solve(coins,amount,dp,0,n);
    }
};