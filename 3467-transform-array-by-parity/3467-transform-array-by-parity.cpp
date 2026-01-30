class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int &i : nums){
            if(i%2==0) i = 0;
            else i = 1;
        }
        sort(begin(nums),end(nums));
        return nums;
    }
};