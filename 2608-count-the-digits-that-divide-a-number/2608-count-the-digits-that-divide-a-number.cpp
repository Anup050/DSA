class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int n = num;
        while(n){
            int m = n%10;
            if(num%m==0) count++;
            n /= 10;
        }
        return count;
    }
};