class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> v;
        for(int i=0; i<n; i++){
            int ele = nums[i];
            int pos = index[i];
            v.insert(v.begin() + pos, ele);
        }
        return v;
    }
};