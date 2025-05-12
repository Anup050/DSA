class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> mp;
        unordered_set<int> s;

        for(int ele : arr){
            mp[ele]++;
        }

        for(auto i : mp){
            s.insert(i.second);
        }

        return mp.size()==s.size();
    }
};