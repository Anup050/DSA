class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int i=num1.length()-1,j=num2.length()-1;
        int carry = 0,sum = 0;
        while(i>=0 || j>=0){
            sum = carry;
            if(i>=0){
                sum += (num1[i]-'0');
                i--;
            }
            if(j>=0){
                sum += (num2[j]-'0');
                j--;
            }
            ans += to_string(sum%10);
            carry = sum/10;
        }
        if(carry) ans += to_string(carry);
        reverse(begin(ans),end(ans));
        return ans;
    }
};