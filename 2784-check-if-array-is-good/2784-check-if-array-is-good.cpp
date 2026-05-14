class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i : nums) mp[i]++;
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(mp.find(i) != mp.end()){
                if(i == n-1 && mp[i] == 2) return true;
            }else{
                return false;
            }
        }
        return false;
    }
};