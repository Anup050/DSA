class Solution {
public:
    string finalString(string s) {
        string str = "";
        for(char c : s){
            if(c == 'i') reverse(begin(str),end(str));
            else str += c;
        }
        return str;
    }
};