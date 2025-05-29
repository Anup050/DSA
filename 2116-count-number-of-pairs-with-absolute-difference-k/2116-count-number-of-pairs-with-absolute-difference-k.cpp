class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        // unordered_map<int,int> mp;
        // for(int i=0; i<nums.size(); i++){
        //     int req = k + nums[i]
        // }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(k == abs(nums[i]-nums[j])){
                    count++;
                }
            }
        }
        return count;
    }
};