class Solution {
public:
    // bool ans(string &str, int start, int end){
    //     if(start>=end) return true;
    //     if(str[start] != str[end]) return false;
    //     return ans(str, start+1, end-1);
    // }
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        string str = "";
        for(char c : s){
            if(isalnum(c)){
                str += tolower(c);
            }
        }
        // return ans(str, 0, str.length()-1);
        int start = 0, end = str.length()-1;
        while(start<end){
            if(str[start++] != str[end--]){
                return false;
            }
        }
        return true;
    }
};