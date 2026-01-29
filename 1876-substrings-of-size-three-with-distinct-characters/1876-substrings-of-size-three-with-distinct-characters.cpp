class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()<3) return 0;
        int count = 0;
        unordered_set<char> st;
        for(int i=2; i<s.length();i++){
            st.insert(s[i-2]);
            st.insert(s[i-1]);
            st.insert(s[i]);
            if(st.size() == 3) count++;
            st.clear();
        }
        return count;
    }
};