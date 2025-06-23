class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int, int> mp;
        
        for(int i : nums1){
            mp[i]++;
        }
        for(int i : nums2){
            if(mp.find(i) != mp.end()){
                v.push_back(i);
                mp.erase(i);
            }
        }
        return v;
    }
};