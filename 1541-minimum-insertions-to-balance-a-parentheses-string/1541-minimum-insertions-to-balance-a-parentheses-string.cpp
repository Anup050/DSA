class Solution {
public:
    int minInsertions(string s) {
        int res = 0;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                count++;
            }else {
                if(count > 0){
                    count--;
                }else{
                    res++;
                }
                if(i<s.length()-1 && s[i+1] == ')') i++;
                else res++;
            }
        }
        return (2*count)+res;
    }
};