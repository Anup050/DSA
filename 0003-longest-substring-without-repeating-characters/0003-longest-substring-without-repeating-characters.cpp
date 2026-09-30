class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;
        int maxS = 0;
        unordered_set<char> st;
        int i=0,j=0;
        while(i < n && j < n){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                j++;
            }else{
                st.erase(s[i]);
                i++;
            }
            maxS = max(maxS, j-i);
        }
        return maxS;
    }
};
