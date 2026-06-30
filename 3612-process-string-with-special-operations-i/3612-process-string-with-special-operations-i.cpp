class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(char c : s){
            if(c >= 'a' && c <= 'z'){
                res += c;
            }else if(c == '*' && !res.empty()){
                res.pop_back();
            }else if(c == '#' && !res.empty()){
                res += res;
            }else if(c == '%' && !res.empty()){
                reverse(begin(res), end(res));
            }
        }
        return res;
    }
};