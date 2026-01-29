class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> fq(26,0);
        for(char c : s){
            fq[c - 'a']++;
            if(fq[c - 'a'] == 2) return c;
        }
        return '\n';
    }
};