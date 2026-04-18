class Solution {
public:
    // bool check(vector<int> & v){
    //     int count= 0;
    //     for(int i=0; i<26; i++){
    //         if(v[i] > 0) count++;
    //     }
    //     return count == 3;
    // }
    int countGoodSubstrings(string s) {
        if(s.length() < 3) return 0;
        int count = 0;
        for(int i = 0; i < s.length() - 2; i++) {
            if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) {
                count++;
            }
        }
        return count;



        // if(s.length()<3) return 0;
        // int count = 0;
        // unordered_set<char> st;
        // for(int i=2; i<s.length();i++){
        //     st.insert(s[i-2]);
        //     st.insert(s[i-1]);
        //     st.insert(s[i]);
        //     if(st.size() == 3) count++;
        //     st.clear();
        // }
        // return count;



        // if(s.length()< 3) return 0;
        // int count = 0;
        // vector<int> fq(26, 0);
        // for(int i=0; i<3; i++){
        //     fq[s[i] - 'a']++;
        // }
        // if(check(fq)) count++;
        // for(int i=3; i<s.length(); i++){
        //     fq[s[i-3] - 'a']--;
        //     fq[s[i] - 'a']++;
        //     if(check(fq)) count++;
        // }
        // return count;
    }
};