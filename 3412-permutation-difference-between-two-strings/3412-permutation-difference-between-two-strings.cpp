class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> mp;
        int aSum = 0;

        for(int i=0; i<s.length(); i++){
            mp[s[i]] = i;
        }

        for(int i=0; i<t.length(); i++){
            aSum += abs(mp[t[i]] - i);
        }

        return aSum;
    }
};