class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num = 0;
        int n = x;
        while(n){
            int d = n%10;
            num += d;
            n /= 10;
        }
        return (x%num == 0) ? num : -1;
    }
};