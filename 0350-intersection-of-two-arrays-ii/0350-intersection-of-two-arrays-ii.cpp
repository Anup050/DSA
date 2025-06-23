class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> mp;
        
        for(int i : nums1){
            mp[i]++;
        }
        for(int i : nums2){
            if(mp.find(i) != mp.end()){
                if(mp[i] != 0){
                    v.push_back(i);
                    mp[i]--;
                }
            }
        }
        return v;
    }
};