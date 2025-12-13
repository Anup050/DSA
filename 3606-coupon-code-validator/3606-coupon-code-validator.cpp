class Solution {
public:
    bool isValid(string &s){
        if(s == "") return false;
        for(char c : s){
            if(!isalnum(c) && c != '_') return false;
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<int,string>> str;
        unordered_map<string,int> mp = {{"electronics",0},{"grocery",1},{"pharmacy",2},{"restaurant",3}};

        for(int i=0; i<code.size(); i++){
            if(isValid(code[i]) && (mp.find(businessLine[i]) != mp.end()) && (isActive[i] == true)){
                str.push_back({mp[businessLine[i]],code[i]});
            }
        }
        sort(begin(str), end(str));
        vector<string> result;
        for(auto & i : str){
            result.push_back(i.second);
        }
        return result;
    }
};