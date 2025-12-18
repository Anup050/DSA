class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 1;
        int i=1;
        n--;
        while(n){
            ans = max(ans,i);
            if(n-i>=0) n -= i;
            else{
                break;
            }
            if(i<=n) i++;
        }
        return ans;
    }
};