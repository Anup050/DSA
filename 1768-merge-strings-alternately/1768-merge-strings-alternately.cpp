class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int n = min(word1.length(), word2.length());
        int i=0;
        while(i<n){
            str += word1[i];
            str += word2[i];
            i++;
        }
        if(i<word1.length()){
            str += word1.substr(i);
        }else if(i<word2.length()){
            str += word2.substr(i);
        }
        return str;
    }
};