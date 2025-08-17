class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count  = 0;
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            int j=0;
            if(pref.length() <= s.length()){
                int i=0;
                bool flag = true;
                while(i<pref.length()){
                    if(s[i] != pref[i]){
                        flag = false;
                        break;
                    }
                    i++;
                }
                if(flag == true) count++;
            }
        }
        return count;
    }
};