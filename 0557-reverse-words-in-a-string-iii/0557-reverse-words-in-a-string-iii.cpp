class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        vector<string> v;
        string word = "";
        for(char c : s){
            if(c != ' '){
                word += c;
            }else{
                reverse(begin(word),end(word));
                v.push_back(word);
                word = "";
            }
        }
        reverse(begin(word),end(word));
        v.push_back(word);
        for(int i=0; i<v.size(); i++){
            if(i != 0) ans += " ";
            ans += v[i];
        }
        return ans;
    }
};