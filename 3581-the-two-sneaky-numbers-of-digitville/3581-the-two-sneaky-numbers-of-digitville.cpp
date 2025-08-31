class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<int> v;
        for(auto i : mp){
            if(i.second != 1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};