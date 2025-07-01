class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // TC : O(nlogn)  SC : O(1)
        // sort(nums.begin(),nums.end());
        // return (nums[nums.size()/2]);

        //TC : O(n)      SC : O(1)
        unordered_map<int,int> mp;
        
        for(int num : nums){
            mp[num]++;
        }
        for(auto i : mp){
            if(i.second > nums.size()/2){
                return i.first;
            }
        }
        return -1;
    }
};