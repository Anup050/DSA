class Solution {
public:
    int rearrangeCharacters(string s, string target) {

        unordered_map<char, int> fqS, fqT;

        for (char c : s) {
            fqS[c]++;
        }

        for (char c : target) {
            fqT[c]++;
        }

        int count = INT_MAX;
        for (auto& [ch, fq] : fqT) {
            count = min(count, fqS[ch] / fq);
        }

        return count;
    }
};
