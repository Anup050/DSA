class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        int i=0;
        while(n){
            ans = max(ans,i);
            if(n-i>=0) n -= i;
            else{
                break;
            }
            if(i<n) i++;
        }
        return ans;
    }
};