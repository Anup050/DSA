class Solution {
public:
    string removeDuplicates(string s) {
        //stack<char> st;
        string str = "";
        // for(char c : s){
        //     if(!st.empty() && st.top() == c){
        //         st.pop();
        //     }else{
        //         st.push(c);
        //     }
        // }
        // while(!st.empty()){
        //     str = st.top() + str;
        //     st.pop();
        // }
        for(char c : s){
            if(!str.empty() && str.back() == c){
                str.pop_back();
            }else{
                str.push_back(c);
            }
        }
        return str;
    }
};