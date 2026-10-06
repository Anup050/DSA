class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v;
        unordered_map<char,int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]] = i;
        }
        int lastX = mp[s[0]];
        int start = 0;
        int i = 0;
        while(i<s.length()){
            while(i<=lastX){
                if(mp[s[i]] > lastX){
                    lastX = mp[s[i]];
                }
                i++;
            }
            v.push_back(lastX-start+1);
            lastX = mp[s[i]];
            start=i;
        }
        return v;
    }
};