class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> s;
        int i=0, j=0;
        while(j<n){
            if(abs(i-j) <= k){
                if(s.find(nums[j]) != s.end()){
                    return true;
                }else{
                    s.insert(nums[j]);
                    j++;
                }
            }else{
                s.erase(nums[i]);
                i++;
            }
        }
        return false;
    }
};