class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        unordered_set<int> s;
        int maxE = *max_element(nums.begin(),nums.end());
        int minE = *min_element(nums.begin(),nums.end());

        for(int i : nums) s.insert(i);
        for(int i = minE; i<= maxE; i++){
            if(s.find(i) == s.end()) v.push_back(i);
        }
        return v;
    }
};