class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        int n = sentences.size();
        int maxWords = 0;
        for(int i=0; i<n; i++){
            string s = sentences[i];
            int count = 1;
            for(int j=0; j<s.length(); j++){
                if(s[j] == ' ')count++;
            }
            maxWords = max(maxWords, count);
        }
        return maxWords;
    }
};