class Solution {
public:
    int longestValidParentheses(string s) {
        int res = 0;
        int open = 0;
        int close = 0;
        for(char  c : s){
            if(c == '(') open++;
            else close++;
            if(close > open){
                close = 0;
                open = 0;
            }else if(close == open){
                res = max(res,close+open);
            }
        }
        open = 0;
        close=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == '(') open++;
            else close++;
            if(close < open){
                close = 0;
                open = 0;
            }else if(close == open){
                res = max(res,close+open);
            }
        }
        return res;
        // stack<int> st;
        // int ans = 0;
        // st.push(-1); 

        // for (int i = 0; i < s.length(); i++) {
        //     if (s[i] == ')' && st.top() != -1 && s[st.top()] == '(') {
        //         st.pop();
        //         ans = max(ans, i - st.top()); 
        //     } 
        //     else {
        //         st.push(i);
        //     }
        // }
        // return ans;
    }
};
