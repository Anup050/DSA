class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i=1; i<=nums.size()-1; i+=2){
            string a = to_string(nums[i-1]);
            string b = to_string(nums[i]);
            a += b;
            ans = min(ans, stoi(a));
        }
        return ans;
    }
};