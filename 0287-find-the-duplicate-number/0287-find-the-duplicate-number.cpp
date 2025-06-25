class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int dup  =-1;
        for(int i : nums){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second != 1){
                dup = i.first;
                break;
            }
        }
        return dup;
    }
};