class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        long rev = 0;
        if(y<0) return false;
        while(y){
            rev = (rev*10) + (y%10);
            y /= 10;
        }
        return rev == x;
    }
};