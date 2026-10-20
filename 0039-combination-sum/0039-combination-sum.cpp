class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &v, int idx, int target, vector<int> &candidates){
        if(idx == candidates.size()){
            if(target == 0){
                ans.push_back(v);
            }
            return;
        }
        if(candidates[idx] <= target){
            v.push_back(candidates[idx]);
            solve(ans, v, idx, target-candidates[idx], candidates);
            v.pop_back();
        }
        solve(ans, v, idx+1, target, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        solve(ans, v, 0, target, candidates);
        return ans;
    }
};