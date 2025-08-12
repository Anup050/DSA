class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string str = "";
        for(char c : s){
            if(!st.empty() && st.top() == c){
                st.pop();
            }else{
                st.push(c);
            }
        }
        while(!st.empty()){
            str = st.top() + str;
            st.pop();
        }
        return str;
    }
};