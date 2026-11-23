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
    void solve(string &s, vector<vector<string>> &ans, vector<string>&str, int idx, int n){
        if(idx == n){
            ans.push_back(str);
            return;
        }
        for(int i=idx; i<n; i++){
            if(check(s, idx, i)){
                string st = s.substr(idx,i-idx+1);
                str.push_back(st);
                solve(s, ans, str, i+1, n);
                str.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> str;
        int n = s.length();
        solve(s, ans, str, 0, n);
        return ans;
    }
};