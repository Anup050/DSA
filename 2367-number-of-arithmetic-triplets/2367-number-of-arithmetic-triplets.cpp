class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(int x : nums){
            if(s.find(x+diff) != s.end() && s.find(x+2*diff) != s.end()) count++;
        }
        return count;
    }
};