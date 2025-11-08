class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count = 0;
        int prefixSum = 0;
        unordered_map<int,int> mp;
        mp[0]++;
        for(int i=0; i<nums.size(); i++){
            prefixSum += nums[i];
            int d = prefixSum % k;
            if(d<0) d += k;
            if(mp.find(d) != mp.end()) count += mp[d];
            mp[d]++;
        }
        
        return count;
    }
};