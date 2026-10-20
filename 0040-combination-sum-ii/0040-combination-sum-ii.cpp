class Solution {
public:
    void cal(vector<vector<int>>& ans, vector<int>& res,
             vector<int>& candidates, int target, int idx) {
        if (target == 0) {
            ans.push_back(res);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;
            res.push_back(candidates[i]);
            cal(ans, res, candidates, target - candidates[i], i + 1);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> res;
        cal(ans, res, candidates, target, 0);
        return ans;
    }
};