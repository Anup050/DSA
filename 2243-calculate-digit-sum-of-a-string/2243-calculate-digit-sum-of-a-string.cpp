class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
            string ans = "";
            int num = 0;
            int j = 0;
            while(j<s.length()){
                num += (s[j]-'0');
                if((j+1)%k==0){
                    ans += to_string(num);
                    num = 0;
                }
                j++;
            }
            if(s.length() % k != 0) ans += to_string(num);
            s = ans;
        }
        return s;
    } 
};