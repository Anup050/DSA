class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> fq1(26, 0);
        vector<int> fq2(26, 0);
        for(char c : word1) fq1[c - 'a']++;
        for(char c : word2) fq2[c - 'a']++;
        for(int i=0; i<word1.length(); i++){
            if(abs(fq1[word1[i] - 'a'] - fq2[word1[i] - 'a']) > 3) return false;
            if(abs(fq1[word2[i] - 'a'] - fq2[word2[i] - 'a']) > 3) return false;
        }
        return true;
    }
};