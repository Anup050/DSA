class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;
        int maxS = 0;

        for (int i = 0; i < n; i++) {
            string str = "";
            for (int j = i; j < n; j++) {
                if (str.find(s[j]) == string::npos) {
                    str += s[j];
                } else {
                    break;
                }
            }
            maxS = max(maxS, (int)str.length());
        }

        return maxS;
    }
};
