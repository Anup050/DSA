class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> v;
        for(auto i : words){
            string st = i;
            string s = "";
            bool flag = true;
            for(char c : st){
                if(c != separator){
                    s += c;
                }else{
                    if(!s.empty()){
                        v.push_back(s);
                        s = "";
                    }
                }
            }
            if(!s.empty()) v.push_back(s);
        }
        return v;
    }
};