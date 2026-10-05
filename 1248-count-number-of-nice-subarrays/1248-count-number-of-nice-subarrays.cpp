class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int res = 0;
        unordered_map<int,int> mp;
        mp[0]++;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 1) count++;
            if(mp.find(count-k) != mp.end()){
                res += mp[count-k];
            }
            mp[count]++;
        }
        return res;
    }
};