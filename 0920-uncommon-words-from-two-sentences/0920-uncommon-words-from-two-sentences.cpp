class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v;
        string str = "";
        unordered_map<string,int> mp1;
        for(char c : s1){
            if(c == ' '){
                mp1[str]++;
                str = "";
            }else{
                str += c;
            }
        }
        mp1[str]++;
        str = "";
        unordered_map<string,int> mp2;
        for(char c : s2){
            if(c == ' '){
                mp2[str]++;
                str = "";
            }else{
               str += c;
            }
        }
        mp2[str]++;
        for(auto i : mp1){
            if((mp2.find(i.first) == mp2.end()) && i.second == 1){
                v.push_back(i.first);
            }
        }
        for(auto i : mp2){
            if((mp1.find(i.first) == mp1.end()) && i.second == 1){
                v.push_back(i.first);
            }
        }
        return v; 
    }
};