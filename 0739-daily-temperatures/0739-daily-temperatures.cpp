class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<int> st;
        vector<int> res(n,0);

        for(int i=0; i<n; i++){
            while(st.size() != 0 && temp[st.top()] < temp[i] ){
                res[st.top()] = i- st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};