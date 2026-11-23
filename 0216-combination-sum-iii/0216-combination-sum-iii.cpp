class Solution {
public:
    void solve(vector<vector<int>> &ans, int idx, int n, int k, vector<int> &t, vector<int> &v){
        if(t.size() == k){
            if(n==0) ans.push_back(t);
            return;
        }
        if(n<0 or idx>=v.size()) return;
        t.push_back(v[idx]);
        solve(ans, idx+1, n - v[idx], k, t, v);
        t.pop_back();
        solve(ans, idx+1, n, k, t, v);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> t;
        solve(ans, 0, n, k,t,v);
        return ans;
    }
};