class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> st;
        int idx = 0;
        for(int i=1; i<=n; i++){
            if(st.size() == target.size()) break;
            st.push(i);
            ans.push_back("Push");
            if(st.top() != target[idx]){
                st.pop();
                ans.push_back("Pop");
            }else{
                if(idx < target.size()-1) idx++;
            }
        }
        return ans;
    }
};