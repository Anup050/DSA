class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            bool flag = true;
            string str = words[i];
            int j=0,k=str.length()-1;
            while(j<k){
                if(str[j] != str[k]){
                    flag = false;
                    break;
                }
                j++;
                k--;
            }
            if(flag == true) return words[i];
        }
        return "";
    }
};