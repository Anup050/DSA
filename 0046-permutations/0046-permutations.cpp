class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &res, vector<bool> &fq, vector<int> &nums, int n){
        if(res.size() == n){
            ans.push_back(res);
            return;
        }
        for(int i=0; i<n; i++){
            if(!fq[i]){
                fq[i] = true;
                res.push_back(nums[i]);
                solve(ans, res, fq, nums, n);
                res.pop_back();
                fq[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> res;
        vector<bool> fq(n, false);
        solve(ans, res, fq, nums, n);
        return ans;
    }
};