class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0;
        unordered_map<string,int> mp;
        unordered_map<string,int> mp1;
        for(int i=0; i<words2.size(); i++){
            mp[words2[i]]++;
        }
        for(int i=0; i<words1.size(); i++){
            mp1[words1[i]]++;
        }
        for(int i=0; i<words1.size(); i++){
            if(mp.count(words1[i]) && mp[words1[i]] == 1 && mp1[words1[i]] == 1){
                count++;
            }
        }
        return count;
    }
};