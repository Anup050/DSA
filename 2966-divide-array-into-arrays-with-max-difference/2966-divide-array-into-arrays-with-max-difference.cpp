class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> res;
        sort(begin(nums), end(nums));
        for(int i=2; i<nums.size(); i+=3){
            int a = nums[i-2];
            int b = nums[i-1];
            int c = nums[i];
            vector<int> v = {a,b,c};
            if(abs(a-b) <= k && abs(a-c) <= k && abs(b-c) <= k) res.push_back(v);
            else return {};
        }
        return res;
    }
};