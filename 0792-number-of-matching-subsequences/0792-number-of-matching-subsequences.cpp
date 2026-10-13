class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]].push_back(i);
        }
        int prev = 0;
        for(int i=0; i<words.size(); i++){
            string str = words[i];
            int prev = -1;
            for(int j=0; j<str.length(); j++){
                auto it = upper_bound(mp[str[j]].begin(),mp[str[j]].end(), prev);
                if(it == mp[str[j]].end()) break;
                prev = *it;
                if(j == str.length()-1) count++;
            }
        }
        return count;
    }
};