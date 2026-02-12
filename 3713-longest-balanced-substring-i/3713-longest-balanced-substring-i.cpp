class Solution {
public:
    bool check(vector<int> &v){
        bool flag = true;
        int fq = 0;
        for(int i=0; i<26; i++){
            if(flag && v[i] != 0){
                fq = v[i];
                flag = false;
            }else if(v[i] != 0){
                if(fq != v[i]) return false;
            }
        }
        return true;
    }
    int longestBalanced(string s) {
        int maxLen = 0;
        int n = s.length();
        for(int i=0; i<n; i++){
            vector<int> v(26,0);
            for(int j=i; j<n; j++){
                v[s[j] - 'a']++;
                if(check(v)) maxLen = max(maxLen, j-i+1);
            }
        }
        return maxLen;
    }
};