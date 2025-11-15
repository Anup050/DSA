class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // vector<int> ans;
        // unordered_set<int> s;
        // for(int i : nums) s.insert(i);
        // for(int i=1; i<=nums.size(); i++){
        //     if(s.find(i) == s.end()) ans.push_back(i);
        // }
        // return ans;

        int n = nums.size();
        vector<int> count(n+1,0);
        vector<int> ans;

        for(int i : nums) count[i]++;

        for(int i=1; i<=n; i++){
            if(count[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};