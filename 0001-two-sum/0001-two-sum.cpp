class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            int req = target - nums[i];
            if(mp.find(req) != mp.end()){
                res.push_back(i);
                res.push_back(mp[req]);
                return res;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};