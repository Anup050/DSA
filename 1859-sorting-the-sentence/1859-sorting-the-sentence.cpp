class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(9,"");
        string st = "123456789";
        string str = "";
        for(char c : s){
            if(st.contains(c)){
                int p = c - '0';
                v[p-1] = str;
                str = "";
            }else if(c != ' '){
                str += c;
            }
        } 
        for(int i=0; i<v.size(); i++){
            if(v[i] == "") break;
            if(i !=0 ) str += " ";
            str += v[i];
        }
        return str;
    }
};