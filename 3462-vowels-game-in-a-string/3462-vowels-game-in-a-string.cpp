class Solution {
public:
    bool isVowel(char &c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    bool doesAliceWin(string s) {
        int count = 0;
        for(char c : s){
            if(isVowel(c)){
                count++;
            }
        }
        return (count%2==0 && count != 0)? true : false;
    }
};