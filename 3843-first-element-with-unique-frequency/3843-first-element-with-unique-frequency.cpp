class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i : nums) mp1[i]++;
        for(auto i : mp1) mp2[i.second]++;
        for(int i : nums){
            if(mp2[mp1[i]] == 1) return i;
        }
        return -1;
    }
};