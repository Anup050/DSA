class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s;
        int count = 0;
        for(char c : allowed){
            s.insert(c);
        }
        for(int i=0; i<words.size(); i++){
            string str = words[i];
            bool flag = true;
            for(char ch : str){
                if(s.find(ch) == s.end()){
                    flag = false;
                    break;
                }
            }
            if(flag == true) count++;
        }
        return count;
    }
};