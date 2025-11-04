class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans  = -1;
        while(n){
            int num = n;
            int pro = 1;
            while(num){
                int digit = num%10;
                pro *= digit;
                num /= 10;
            }
            if(pro%t==0){
                ans = n;
                break;
            }
            n++;
        }
        return ans;
    }
};