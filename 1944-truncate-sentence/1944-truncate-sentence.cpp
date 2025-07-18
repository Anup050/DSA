class Solution {
public:
    string truncateSentence(string s, int k) {
        string str = "";
        int sp = 0;
        for(char c : s){
            if(c == ' ')sp++;
            if(sp == k) break;
            str += c;
        }
        return str;
    }
};