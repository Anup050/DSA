class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> v;
        unordered_set<int> s2;
        for(int i : nums2) s2.insert(i);
        unordered_set<int> s3;
        for(int i : nums3) s3.insert(i);
        unordered_set<int> ans;
        for(int i : nums1){
            if(s2.find(i) != s2.end()) ans.insert(i);
            if(s3.find(i) != s3.end()) ans.insert(i);
        }
        for(int i : nums2){
            if(s3.find(i) != s3.end()) ans.insert(i);
        }
        for(auto i : ans){
            v.push_back(i);
        }
        return v;
    }
};