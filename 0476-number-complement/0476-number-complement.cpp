class Solution {
public:
    int findComplement(int n) {
        string s = "";
        if(n == 0) s = '0';
        while (n > 0) {
            s += char('0' + (n % 2));
            n /= 2;
        }
        reverse(s.begin(), s.end());
        for(char &c : s){
            if(c == '0') c = '1';
            else c = '0';
        }
        long long temp = 1;
        int ans = 0;
        int i = s.length();
        while(i--){
            if(s[i] == '1'){
                ans += temp;
            }
            temp *= 2;
        }
        return ans;

    }
};