class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> v;
        unordered_set<int> s;
        for(int i : friends){
            s.insert(i);
        }
        for(int i : order){
            if(s.find(i) != s.end()) v.push_back(i);
        }
        return v;
    }
};