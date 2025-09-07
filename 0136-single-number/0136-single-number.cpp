class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i : nums){
        //     mp[i]++;
        // }
        // for(auto i : mp){
        //     if(i.second == 1){
        //         return i.first;
        //     }
        // }
        // return -1;
        int num = 0;
        for(int i : nums){
            num ^= i;
        }
        return num;
    }
};