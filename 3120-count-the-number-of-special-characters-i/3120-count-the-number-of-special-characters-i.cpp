class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        unordered_set<char> s;
        for(char c : word){
            s.insert(c);
        }
        for(char c : word){
            char ch = c;
            if(isupper(c)) ch = tolower(c);
            else ch = toupper(c);
            if((s.find(c) != s.end()) && (s.find(ch) != s.end())){
                count++;
                s.erase(c);
            }
        }
        return count;
    }
};