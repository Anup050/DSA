class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int num = -1;
        for(int i : nums){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second == 1){
                num = i.first;
                break;
            }
        }
        return num;
    }
};