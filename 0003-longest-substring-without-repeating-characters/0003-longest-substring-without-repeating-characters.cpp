class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;
        int maxS = 0;
        vector<int> v(256,0);
        int i=0,j=0;
        while(i < n && j < n){
            if(v[s[j]] == 0){
                v[s[j]] = 1;
                j++;
            }else{
                v[s[i]] = 0;
                i++;
            }
            maxS = max(maxS, j-i);
        }
        return maxS;
    }
};
