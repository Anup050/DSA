class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mSum = 0;
        int mC = 0;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
            mC = max(mC,mp[i]);
        }
        for(auto &i : mp){
            if(i.second == mC) mSum += i.second;
        }
        return mSum;
    }
};