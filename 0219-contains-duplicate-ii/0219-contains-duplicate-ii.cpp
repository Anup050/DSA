class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //TLE: 

        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j] && abs(i - j) <= k){
        //         return true;
        //     }
        //     }
        // }
        // return false;
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            if (mp.find(nums[i]) != mp.end() && (i - mp[nums[i]] <= k)) {
                return true;
            }
            mp[nums[i]] = i;
        }

        return false;
    }
};
