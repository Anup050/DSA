class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int count = 0;

        for (int num : nums) {
            count += freq[num - k];
            count += freq[num + k];
            freq[num]++;
        }
        return count;

        //int n = nums.size();
        // int count = 0;
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(k == abs(nums[i]-nums[j])){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};