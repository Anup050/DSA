class Solution {
public:
    bool isAnagram(string &s1, string &s2){
        int arr[26] = {0};

        for(char &c : s1){
            arr[c - 'a']++;
        }
        for(char &c : s2){
            arr[c - 'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        // vector<string> str;
        // str.push_back(words[0]);
        // for(int i=1; i<words.size(); i++){
        //     string s = words[i-1];
        //     sort(s.begin(),s.end());
        //     string t = words[i];
        //     sort(t.begin(),t.end());
        //     if(s != t){
        //         str.push_back(words[i]);
        //     }
        // }
        // return str;
        vector<string> str;
        str.push_back(words[0]);
        for(int i=1; i<words.size(); i++){
            if(!isAnagram(words[i],str.back())){
                str.push_back(words[i]);
            }
        }
        return str;
    }
};