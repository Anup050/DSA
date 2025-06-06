class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;

        string str = "";
        for(char c : s){
            if(isalnum(c)){
                str += tolower(c);
            }
        }
        int i=0,j=str.length()-1;

        while(i<j){
            if(str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};