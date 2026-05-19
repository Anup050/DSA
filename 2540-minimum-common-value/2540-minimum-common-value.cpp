class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        // int minC = INT_MAX;
        for(int i : nums1){
            s.insert(i);
        }
        for(int i : nums2){
            if(s.find(i) != s.end()){
                // minC = min(minC, i);
                return i;
            }
        }
        // return (minC == INT_MAX) ? -1 : minC;
        return -1;
    }
};