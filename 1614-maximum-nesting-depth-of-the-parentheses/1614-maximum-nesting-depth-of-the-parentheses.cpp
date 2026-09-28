class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        stack<char> st;
        for(char c : s){
            if(c == '('){
                st.push('(');
                int n = st.size();
                count = max(count, n);
            }else if(c == ')') st.pop();
        }
        return count;
    }
};