class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> str;
        str.push_back(words[0]);
        for(int i=1; i<words.size(); i++){
            string s = words[i-1];
            sort(s.begin(),s.end());
            string t = words[i];
            sort(t.begin(),t.end());
            if(s != t){
                str.push_back(words[i]);
            }
        }
        return str;
    }
};