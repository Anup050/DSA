class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        for(int i=0; i<n; i++){
            s.insert(nums[i]);
        }
        for(int i=0; i<nums.size();i++){
            if(s.find(i+1) == s.end()){
                return i+1;
            }
        }
        return n+1;
    }
};