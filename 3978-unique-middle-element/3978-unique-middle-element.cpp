class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
            if(mp[nums[n]] > 1) return false;
        }
        return true;
    }
};