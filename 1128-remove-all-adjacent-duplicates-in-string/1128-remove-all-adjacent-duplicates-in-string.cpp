class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res = "";
        for( char c : s){
            if ( !st.empty() && st.top() == c) st.pop();
            else st.push(c);
        }
        while( st.size() != 0){
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};