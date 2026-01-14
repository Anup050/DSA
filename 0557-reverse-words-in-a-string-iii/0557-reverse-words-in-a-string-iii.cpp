class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        //vector<string> v;
        string word = "";
        for(char c : s){
            if(c != ' '){
                word += c;
            }else{
                reverse(begin(word),end(word));
                //v.push_back(word);
                ans += " " + word;
                word = "";
            }
        }
        reverse(begin(word),end(word));
        //v.push_back(word);
        ans += " " + word;
        // for(int i=0; i<v.size(); i++){
        //     if(i != 0) ans += " ";
        //     ans += v[i];
        // }
        // return ans;
        return ans.substr(1);
    }
};