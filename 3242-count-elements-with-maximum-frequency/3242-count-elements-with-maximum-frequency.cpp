class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int> mp;
        int maxF = INT_MIN;
        for(int i : nums){
            mp[i]++;
            maxF = max(maxF, mp[i]);
        }
        int count = 0;
        for(auto i : mp){
            if(i.second == maxF){
                count++;
            }
        }
        return maxF*count;
    }
};