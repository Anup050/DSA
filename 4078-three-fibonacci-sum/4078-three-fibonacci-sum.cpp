class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a=0;
        int b=1;
        int c=a+b;
        int sum=a+b+c;
        while(sum<=n){
            if(sum==n) return true;
            a=b;
            b=c;
            c=a+b;
            sum=a+b+c;
        }
        return false;
    }
};