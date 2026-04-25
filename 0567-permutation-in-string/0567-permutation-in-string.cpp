class Solution {
public:
    // bool check(vector<int> v, string s){
    //     for(char c : s){
    //         v[c-'a']--;
    //     }
    //     for(int i : v){
    //         if(i != 0) return false;
    //     }
    //     return true;
    // }
    // bool checkInclusion(string s1, string s2) {
    //     int m = s1.length();
    //     int n = s2.length();
    //     if(m > n) return false;
    //     vector<int> v(26, 0);
    //     for(char c : s1){
    //         v[c-'a']++;
    //     }
    //     int i=0;
    //     while(i+m<=n){
    //         string s = s2.substr(i, m);
    //         if(check(v, s)) return true;
    //         i++;
    //     }
    //     return false;
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        if (m > n) return false;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for (int i = 0; i < m; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }
        if (freq1 == freq2) return true;
        for (int i = m; i < n; i++) {
            freq2[s2[i] - 'a']++;
            freq2[s2[i - m] - 'a']--;
            if (freq1 == freq2) return true;
        }
        return false;
    }
};