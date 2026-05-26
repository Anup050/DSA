class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> mp;
        for(int i=0; i<word.length(); i++){
            if(isupper(word[i])){
                if(mp.find(word[i]) == mp.end()) mp[word[i]] = i;
            }else{
                mp[word[i]] = i;
            }
        }
        int count = 0;
        for(auto i : mp){
            char c = i.first;
            if(isupper(c)){
                if(mp.find(tolower(c)) != mp.end() && mp[c] > mp[tolower(c)]) count++;
            }
        }
        return count;
    }
};