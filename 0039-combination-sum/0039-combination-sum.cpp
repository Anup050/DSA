class Solution {
public:
 void cal(vector<vector<int>> &ans, vector<int> &res, vector<int> candidates, int target, int idx){
        if(idx == candidates.size()){
            if(target == 0){
                ans.push_back(res);
            }
            return;
        }
        if(candidates[idx] <= target){
            res.push_back(candidates[idx]);
            cal(ans, res, candidates, target-candidates[idx], idx);
            res.pop_back();
        }
        cal(ans, res, candidates, target, idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        cal(ans, res, candidates, target, 0);
        return ans;
    }
};