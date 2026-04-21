class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int count = 1;
        int maxCount = INT_MIN;
        unordered_set<char> s;
        s.insert(word[0]);
        for(int i=1; i<word.length(); i++){
            if(word[i]>=word[i-1]){
                count++;
                s.insert(word[i]);
                if(s.size() == 5) maxCount = max(maxCount, count);
            }else{
                s.clear();
                count = 1;
                s.insert(word[i]);
            }
        }
        return (maxCount == INT_MIN) ? 0 : maxCount;
    }
};