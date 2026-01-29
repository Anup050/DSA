class Solution {
public:
    string clearDigits(string s) {
        string str = "";
        string st = "0123456789";
        for(char c : s){
            if(st.contains(c)) str.pop_back();
            else str += c;
        }
        return str;
    }
};