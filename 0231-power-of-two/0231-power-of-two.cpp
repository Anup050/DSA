class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        // if((n & n-1) == 0) return true;
        // return false;
        while(n%2==0){
            n /= 2;
        }
        if(n == 1) return true;
        return false;

        //third approach
        //2*x > n return false // return true(when 2*x == n);
    }
};