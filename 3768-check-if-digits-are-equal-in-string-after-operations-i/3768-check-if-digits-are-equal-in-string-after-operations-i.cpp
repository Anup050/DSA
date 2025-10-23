class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.length();

        while(n != 2){
            string str = "";
            for(int i=1; i<n; i++){
                int m = s[i-1]+s[i];
                string st = to_string(m%10);
                str += st;
            }
            n = str.length();
            s = str;
        }
        return (s[0] != s[1]) ? false : true;
    }
};