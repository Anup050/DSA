class Solution {
public:
    bool isVowel(char &ch){
        char c = tolower(ch);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<s.length()/2; i++){
            if(isVowel(s[i])) count1++;
        }
        for(int i=s.length()/2; i<s.length(); i++){
            if(isVowel(s[i])) count2++;
        }
        return count1 == count2;
    }
};