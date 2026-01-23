class Solution {
public:
    bool isPalindrome(string &s, int st, int e){
        while(st<e){
            if(s[st] != s[e]) return false;
            st++;
            e--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i] != s[j]){
                return (isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1));
            }
            i++;
            j--;
        }
        return true;
    }
};