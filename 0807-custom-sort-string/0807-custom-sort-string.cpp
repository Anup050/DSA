class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string ans = "";
        for(char c : s){
            mp[c]++;
        }
        for(char ch : order){
            if(mp.find(ch) != mp.end()){
                while(mp[ch] > 0){
                    ans += ch;
                    mp[ch]--;
                }
            }
        }
        for(auto& i : mp){
            while(i.second > 0){
                ans += i.first;
                mp[i.first]--;
            }
        }
        return ans;
    }
};