class Solution {
public:
    bool isVowel(char &ch){
        char c = tolower(ch);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    string sortVowels(string s) {
        string str = "";
        for(char c : s){
            if(isVowel(c)){
                str += c;
            }
        }
        sort(str.begin(),str.end());
        int idx = 0;
        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])){
                s[i] = str[idx++];
            }
        }
        return s;
    }
};