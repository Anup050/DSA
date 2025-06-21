class Solution {
public:
    char findTheDifference(string s, string t) {
        // char ch = 0;
        // for (char c : s) ch ^= c;
        // for (char c : t) ch ^= c;
        // return ch;

        // int sumS = 0, sumT = 0;
        // for (char c : s) sumS += c;
        // for (char c : t) sumT += c;
        // return sumT - sumS;

        std::unordered_map<char, int> freq;
        
        for (char c : s) {
            freq[c]++;
        }
        
        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0) {
                return c;
            }
        }
        
        return '\0';
    }
};