class Solution {
public:
    bool isVowel(char &c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }

    int maxVowels(string s, int k) {
        int ans = 0;
        int n = s.length();
        int i=0,j=k;
        int count = 0;
        int z = i;
        while(z<j){
            if(isVowel(s[z])){
                count++;
            }
            z++;
        }
        ans = max(ans,count);
        while(j<n){
            if(isVowel(s[i])) count--;
            if(isVowel(s[j])) count++;
            ans = max(ans,count);
            i++;
            j++;
        }
        return ans;
    }
};