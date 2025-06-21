class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // return false;

        // unordered_map<char, int> mp;

        // for(int i=0; i<s.length(); i++){
        //     mp[s[i]]++;
        // }
        // for(int i=0; i<t.length(); i++){
        //     mp[t[i]]--;
        // }
        // for(auto i : mp){
        //     if(i.second != 0) return false;
        // }
        
        // return true;

        int count[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true;
    }
};