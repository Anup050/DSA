class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> str;
        string ans = "";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 || j == n-1) ans += ".";
                else ans += "#";
            }
            str.push_back(ans);
            ans = "";
        }
        return str;
    }
};