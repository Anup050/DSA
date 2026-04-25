class Solution {
public:
    bool check(vector<int> v, string s){
        for(char c : s){
            v[c-'a']--;
        }
        for(int i : v){
            if(i != 0) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        if(m > n) return false;
        vector<int> v(26, 0);
        for(char c : s1){
            v[c-'a']++;
        }
        int i=0;
        while(i+m<=n){
            string s = s2.substr(i, m);
            if(check(v, s)) return true;
            i++;
        }
        return false;
    }
};