class Solution {
public:
    int binaryGap(int n) {
        int d = 0;
        string ans = "";
        while(n){
            ans += to_string(n&1);
            n >>= 1;
        }
        reverse(begin(ans),end(ans));
        bool flag = true;
        int f = 0;
        int l = 0;
        for(int i=0; i<ans.length(); i++){
            if(ans[i] == '1'){
                if(flag){
                    f = i;
                    flag = false;
                }else{
                    l = i;
                    d = max(d,l-f);
                    f = i;
                }
            }
        }
        return d;
    }
};