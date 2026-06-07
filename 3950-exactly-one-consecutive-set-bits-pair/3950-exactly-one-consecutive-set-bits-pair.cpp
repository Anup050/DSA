class Solution {
public:
    bool consecutiveSetBits(int n) {
        string ans = "";
        while(n){
            ans += ((n&1) + '0');
            n = n >> 1;
        }
        int count = 0;
        for(int i=1; i<ans.length(); i++){
            if(ans[i] == '1' && ans[i-1] == '1') count++;
        }
        return (count == 1) ? true : false;
    }
};