class Solution {
public:
    char shift(char a, char b) {
        return a + (b - '0');
    }
    string replaceDigits(string s) {
        string str = "";
        for(int i=1; i<s.length(); i+=2){
            str += s[i-1];
            str += shift(s[i-1],s[i]);
        }
        if (s.length() % 2 != 0) {
            str += s.back();
        }
        return str;
    }
};