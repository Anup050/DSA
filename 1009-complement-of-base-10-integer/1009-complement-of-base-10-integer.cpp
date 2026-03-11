class Solution {
public:
    int bitwiseComplement(int n) {

        // string s = "";
        // if(n == 0) s = '0';
        // while (n > 0) {
        //     s += char('0' + (n % 2));
        //     n /= 2;
        // }
        // reverse(s.begin(), s.end());
        // for(char &c : s){
        //     if(c == '0') c = '1';
        //     else c = '0';
        // }
        // int temp = 1;
        // int ans = 0;
        // int i = s.length();
        // while(i--){
        //     if(s[i] == '1'){
        //         ans += temp;
        //     }
        //     temp *= 2;
        // }
        // return ans;
        if(n == 0) return 1;
        int res = 0;
        int power = 0;
        while(n){
            int r = n%2;
            res += (pow(2, power) * !r);
            power++;
            n /= 2;
        }
        return res;
    }
};