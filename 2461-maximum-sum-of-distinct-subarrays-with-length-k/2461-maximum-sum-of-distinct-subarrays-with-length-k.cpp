class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        long long sum=0;
        long long csum=0;
        for(int i=0;i<k;i++){
            csum+=nums[i];
            mp[nums[i]]++;
            if(csum>sum && mp.size() == k) sum=csum;
        }
        for(int i=k;i<nums.size();i++){
            csum+=nums[i]-nums[i-k];
            if(mp[nums[i-k]]>1) mp[nums[i-k]]--;
            else mp.erase(nums[i-k]);
            mp[nums[i]]++;
            if(csum>sum && mp.size() == k) sum=csum;
        }
        return sum;
    }
};