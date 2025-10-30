class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            for(int j=0; j<words.size(); j++){
                if(words[j].contains(s) && i != j){
                    res.push_back(s);
                    break;
                }
            }
        }
        return res;
    }
};