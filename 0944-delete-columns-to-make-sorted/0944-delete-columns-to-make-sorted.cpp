class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int m = strs.size();
        int n = strs[0].length();

        vector<vector<char>> ans(m, vector<char>(n));
        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            for(int j=0; j<ans[i].size(); j++){
                ans[i][j] = s[j];
            }
        }
    
        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++){
                char a = ans[j-1][i];
                char b = ans[j][i];
                if(a > b){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};