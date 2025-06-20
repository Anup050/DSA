class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> v;
        int n = nums.size();

        for (int num : nums) {
            mp[num]++;
        }
        
        for (auto& it : mp) {
            if (it.second > n / 3) {
                v.push_back(it.first);
            }
        }

        return v;
    }
};
