class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int maxLen = 1;
        for(int j=1; j<s.length(); j++){
            if(s[j-1] > s[j] || (s[j] - s[j-1] != 1 )){
                count = 1;
            }else{
                count++;
            }
            maxLen = max(maxLen,count);
        }
        return maxLen;
    }
};