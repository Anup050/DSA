class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(),s.end());
        for(int i=0; i<n; i++){
            string word = "";
            while(i<n && s[i] != ' '){
                word += s[i];
                i++;
            }
            if(word.length()>0){
                reverse(word.begin(),word.end());
                ans += " " + word;
            }
        }
        return ans.substr(1);

        // stringstream ss(s);
        // string token = "";
        // string res = "";
        // while(ss >> token){
        //     res = token + " "+ res;
        // }
        // return res.substr(0,res.length()-1);
        // vector<string> st;
        // int i=0;
        // while(i<s.length()){
        //     if(s[i] == ' ') i++;
        //     else break;
        // }
        // int j = s.length()-1;
        // while(j>0){
        //     if(s[j] == ' ') j--;
        //     else break;
        // }
        // string str = "";
        // bool flag = false;
        // while(i<=j){
        //     if(s[i] != ' '){
        //         str += s[i];
        //         flag = true;
        //     }else if(flag){
        //         st.push_back(str);
        //         st.push_back(" ");
        //         str = "";
        //         flag = false;
        //     }
        //     i++;
        // }
        // st.push_back(str);
        // s = "";
        // for(int i=0; i<st.size(); i++){
        //     s = st[i] + s;
        // }
        // return s;
    }
};