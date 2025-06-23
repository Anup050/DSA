class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v(2);
        vector<int> v1;
        vector<int> v2;
        unordered_set<int> s1;
        unordered_set<int> s2;

        for(int i : nums1){
            s1.insert(i);
        }
        for(int i : nums2){
            s2.insert(i);
        }

        for(int i : s1){
            if(s2.find(i) == s2.end()){
                v1.push_back(i);
            }
        }
        for(int i : s2){
            if(s1.find(i) == s1.end()){
                v2.push_back(i);
            }
        }
        
        v[0] = v1;
        v[1] = v2;
        return v;
    }
};