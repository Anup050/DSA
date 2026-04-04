class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> fq;
        for(int i : arr) mp[i]++;
        for(auto i : mp){
            if(fq.find(i.second) != fq.end()) return false;
            else fq.insert(i.second);
        }
        return true;
    }
};