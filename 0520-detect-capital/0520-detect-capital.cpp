class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() == 1) return true;
        bool cp = false;
        bool sm = false;
        bool fL = (isupper(word[0])) ? true : false;
        for(int i=1; i<word.length(); i++){
            if(isupper(word[i])) cp = true;
            else sm = true;
        }
        if(fL){
            if(cp == true && sm == false) return true;
            else if(cp == false && sm == true) return true;
        }else{
            if(!cp) return true;
        }
        return false;
    }
};