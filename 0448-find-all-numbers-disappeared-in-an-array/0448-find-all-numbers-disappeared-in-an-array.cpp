class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        unordered_set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        for(int i=1; i<=nums.size(); i++){
            if(s.find(i) == s.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};