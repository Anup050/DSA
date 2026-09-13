class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        for(auto i : mp){
            if(i.second.size() == 3){
                vector<int> v = i.second;
                if(v[1]-v[0] == v[2]-v[1]) count++;
            }
        }
        return count;
    }
};