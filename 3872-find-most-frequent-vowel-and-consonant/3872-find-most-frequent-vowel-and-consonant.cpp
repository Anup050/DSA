class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    bool isCon(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return false;;
        }
        return true;
    }
    int maxFreqSum(string s) {
        int v = 0;
        int c = 0;

        unordered_map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }

        for(auto i : mp){
            if(isVowel(i.first)){
                v = max(v, i.second);
            }else if(isCon(i.first)){
                c = max(c, i.second);
            }
        }
        return v+c;
    }
};