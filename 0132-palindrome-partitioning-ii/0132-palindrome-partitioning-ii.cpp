class Solution {
public:
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int solve(string &s, int idx, int n,vector<int>&dp){
        if(idx == n){
            return 0;
        }
        if(dp[idx]!=-1) return dp[idx];
        int mini=INT_MAX;
        for(int i=idx; i<n; i++){
            if(check(s, idx, i)){
                int ans = 1 + solve(s, i+1, n,dp);
                mini=min(ans,mini);
            }
        }
        return dp[idx]=mini;
    }
    int minCut(string s) {
        int n = s.length();
        int count = 0;
        vector<int> dp(n,-1);
        return solve(s, 0, n,dp)-1;
        
    }
};