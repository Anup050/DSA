class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;
        for(int i : nums) s.insert(i);
        for(int i=k; i<=(nums.size()+1)*k; i=i+k){
            if(s.find(i) == s.end()) return i;
        }
        return -1;
    }
};