class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char next = 'a';

        for(char c : key) {
            if(c != ' ' && mp.find(c) == mp.end()) {
                mp[c] = next;
                next++;
            }
        }

        string ans = "";
        for(char c : message) {
            if(c == ' ')
                ans += ' ';
            else
                ans += mp[c];
        }
        return ans;
    }
};
