class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> v;
        unordered_map<int,int> mp;
        for(int i=0; i<nums2.size(); i++){
            mp[nums2[i][0]] = nums2[i][1];
        }
        for(int i=0; i<nums1.size(); i++){
            if(mp.find(nums1[i][0]) != mp.end()){
                v.push_back({nums1[i][0], nums1[i][1]+mp[nums1[i][0]]});
            }else{
                v.push_back({nums1[i][0], nums1[i][1]});
            }
        }
        unordered_map<int,int> mp1;
        for(int i=0; i<nums1.size(); i++){
            mp1[nums1[i][0]] = nums1[i][1];
        }
        for(int i=0; i<nums2.size(); i++){
            if(mp1.find(nums2[i][0]) == mp1.end()){
                v.push_back({nums2[i][0], nums2[i][1]});
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};