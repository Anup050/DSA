class Solution {
public:
    string greatestLetter(string s) {
        char ans = '\0';
        unordered_set<char> st;
        for(char c : s){
            st.insert(c);
            char ch = c;
            if(isupper(c)) ch = tolower(c);
            else ch = toupper(c);
            if((st.find(c) != st.end()) && (st.find(ch) != st.end())){
                if(ans < toupper(c)) ans = (char)toupper(c);
            }
        }
        return (ans == '\0') ? "" : string(1,ans);
    }
};