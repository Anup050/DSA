class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int> mp;
        int prefixSum = 0;
        mp[0]++;
        for(int i=0; i<nums.size(); i++){
            prefixSum += nums[i];
            int rem = prefixSum - k;
            if(mp.find(rem) != mp.end()) count += mp[rem];
            mp[prefixSum]++;
        }
        return count;
    }
};