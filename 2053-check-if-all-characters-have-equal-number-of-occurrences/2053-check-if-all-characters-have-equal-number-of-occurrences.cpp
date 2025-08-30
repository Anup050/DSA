class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        bool flag = true;

        for(char c : s){
            mp[c]++;
        }
        int fq = 0;
        for(auto i : mp){
            if(flag == true){
                fq = i.second;
                flag = false;
            }else{
                if(fq != i.second) return false;
            }
        }
        return true;
    }
};