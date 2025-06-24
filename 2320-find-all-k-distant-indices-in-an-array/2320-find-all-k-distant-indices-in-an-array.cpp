class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ki;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                ki.push_back(i);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j : ki) {
                if (abs(i - j) <= k) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};