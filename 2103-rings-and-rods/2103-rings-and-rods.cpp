class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,unordered_set<char>> mp;
        int count = 0;
        for(int i=1; i<rings.length(); i+=2){
            mp[rings[i]].insert(rings[i-1]);
        }
        for(auto i : mp){
            if(i.second.size() == 3) count++;
        }
        return count;
    }
};