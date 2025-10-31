class Solution {
public:
    string generate(string &word){
        int arr[26] = {0};
        for(char &ch : word){
            arr[ch - 'a']++;
        }
        string ans = "";
        for(int i=0; i<26; i++){
            int freq = arr[i];
            if(freq>0){
                ans += string(freq, i+'a');
            }
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //(n*klogk)
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0; i<strs.size(); i++){
            //string temp = strs[i];
            //sort(begin(temp),end(temp));
            string temp = generate(strs[i]);
            mp[temp].push_back(strs[i]);
        }
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};