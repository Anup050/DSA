class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int idx = 0;
        if(s.length() != words.size()) return false;
        for(int i=0; i<words.size(); i++){
            string str = words[i];
            if(str[0] != s[idx++]){
                return false;
            }
        }
        return true;
    }
};