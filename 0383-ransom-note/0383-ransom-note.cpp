class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(char c : ransomNote){
            mp[c]++;
        }
        for(char c : magazine){
            if(mp.find(c) != mp.end()){
                mp[c]--;
            }
        }
        for(auto i : mp){
            if(i.second > 0){
                return false;
            }
        }
        return true;
    }
};