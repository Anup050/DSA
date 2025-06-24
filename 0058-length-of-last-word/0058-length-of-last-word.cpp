class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int j = s.length()-1;
        while(j>=0 && s[j] == ' '){
            j--;
        }
        for(int i=j; i>=0; i--){
            if(s[i] == ' ') return ans;
            ans++;
        }
        return ans;
    }
};