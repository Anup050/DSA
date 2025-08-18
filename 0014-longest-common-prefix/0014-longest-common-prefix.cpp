class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];
        string s = "";
        bool flag = false;
        for(int i=1; i<strs.size(); i++){
            string s1 = strs[i-1];
            string s2 = strs[i];
            int j=0;
            string res = "";
            while(j<s1.length() && j<s2.length()){
                if(s1[j] != s2[j]){
                    break;
                }
                res += s1[j];
                j++;
            }
            
            if(flag == false){
                s = max(s,res);
                flag = true;
            }else{
                s = min(s, res);
            }
        }
        return s;
    }
};