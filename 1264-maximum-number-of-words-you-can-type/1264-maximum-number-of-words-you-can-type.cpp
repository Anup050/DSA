class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        bool flag = true;
        
        for(char c : text) {
            if(c != ' ') {
                if(brokenLetters.find(c) != string::npos) {
                    flag = false;
                }
            } else {
                if(flag) count++;
                flag = true;
            }
        }
        if(flag) count++;
        return count;
    }
};
