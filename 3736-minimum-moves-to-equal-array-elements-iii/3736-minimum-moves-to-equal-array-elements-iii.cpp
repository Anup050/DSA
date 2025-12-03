class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        int maxE = *max_element(begin(nums), end(nums));
        for(int i : nums) count += maxE-i;
        return count;
    }
};