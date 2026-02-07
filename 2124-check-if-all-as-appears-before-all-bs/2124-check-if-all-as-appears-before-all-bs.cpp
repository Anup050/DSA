class Solution {
public:
    bool checkString(string s) {
        bool a = true;
        for(char c : s){
            if(c == 'b') a = false;
            if(!a){
                if(c == 'a') return false;
            }
        }
        return true;
    }
};