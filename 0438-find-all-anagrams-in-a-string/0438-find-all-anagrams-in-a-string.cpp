class Solution {
public:
    bool check(vector<int> &v){
        for(int i : v){
            if(i != 0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> res(26,0);
        int n = s.length();
        int m = p.length();
        for(char c : p){
            res[c - 'a']++;
        }
        int i=0,j=0;
        while(j<n){
            res[s[j] - 'a']--;
            if(j-i+1 == m){
                if(check(res)) ans.push_back(i);
                res[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};