class Solution {
public:
    bool check(char a, char b){
        if(a == b) return true;
        else if(a == tolower(b) || a == toupper(b)) return false;
        return true;
    }
    string makeGood(string s) {
        string ans = "";
        int n = s.length();
        int i=0;
        while(i<n){
            if(!ans.empty() && !check(ans.back(),s[i])){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};