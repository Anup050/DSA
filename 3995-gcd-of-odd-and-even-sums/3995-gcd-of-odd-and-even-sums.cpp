class Solution {
public:
    int gcd(int a, int b){
        while(b != 0){
            a = a%b;
            swap(a,b);
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int num = 1;
        int evenSum = 0;
        int oddSum = 0; 
        while(num++<=2*n){
            if(num%2==0) evenSum += num;
            else oddSum += num;
        }
        return gcd(oddSum, evenSum);
    }
};