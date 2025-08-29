class Solution {
public:
    string customSortString(string order, string s) {
        // unordered_map<char,int> mp;
        // string ans = "";
        // for(char c : s){
        //     mp[c]++;
        // }
        // for(char ch : order){
        //     if(mp.find(ch) != mp.end()){
        //         while(mp[ch] > 0){
        //             ans += ch;
        //             mp[ch]--;
        //         }
        //     }
        // }
        // for(auto& i : mp){
        //     while(i.second > 0){
        //         ans += i.first;
        //         mp[i.first]--;
        //     }
        // }
        // return ans;

        unordered_map<char,int> mp;
        for(int i=0; i<order.length(); i++){
            mp[order[i]] = i;
        }
        sort(s.begin(), s.end(), [&mp] (char ch1, char ch2){
            return mp[ch1] < mp[ch2];
        });
        return s;
    }
};