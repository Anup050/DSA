class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> v;
        
        vector<int> count1(26,0);
        string s = words[0];
        for(char c : s){
            count1[c - 'a']++;
        }
        for(int i=1; i<words.size(); i++){
            vector<int> count2(26,0);
            string str = words[i];
            for(char c : str){
                count2[c - 'a']++;
            }
            for(int i=0; i<26; i++){
                count1[i] = min(count1[i],count2[i]);
            }
        }
        for(int i=0; i<26; i++){
            string s = "";
            s += (i+'a');
            int n = count1[i];
            while(n){
                v.push_back(s);
                n--;
            }
        }
        return v;
    }
};
