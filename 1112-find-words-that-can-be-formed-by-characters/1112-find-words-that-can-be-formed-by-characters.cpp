class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        
        for(int i=0; i<words.size(); i++){
            unordered_map<char,int> mp;
            for(char c : chars){
                mp[c]++;
            }
            string str = words[i];
            bool flag = true;
            for(char c : str){
                if((mp.find(c) != mp.end()) && mp[c]>0){
                    mp[c]--;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag == true) sum += str.length();
        }
        return sum;
    }
};