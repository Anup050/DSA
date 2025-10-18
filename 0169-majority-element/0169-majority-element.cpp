class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i : nums){
        //     mp[i]++;
        // }
        // for(auto &i : mp){
        //     if(i.second > nums.size()/2){
        //         return i.first;
        //     }
        // }
        // return -1;
        
        //Moore's Voting Algo
        int cnt = 0;
        int ele = 0;
        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                ele = nums[i];
            }else if(nums[i] == ele){
                cnt++;
            }else{
                cnt--;
            }
        }
        int cnt2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == ele) cnt2++;
            if(cnt2 > nums.size()/2) return ele;
        }
        return -1;
    }
};