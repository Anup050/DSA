class Solution {
public:
    void solve(set<vector<int>> &s, vector<int> &nums, int idx){
        if(idx == nums.size()){
            s.insert(nums);
            return;
        }
        for(int i=idx; i<nums.size(); i++){
            swap(nums[idx], nums[i]);
            solve(s, nums, idx+1);
            swap(nums[idx], nums[i]);
        }
    }    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        solve(s, nums, 0);
        for(auto i : s){
            ans.push_back(i);
        }
        return ans;
    }
};