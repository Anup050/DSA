class Solution {
public:
    bool hasAlternatingBits(int n) {
        int b1 = n%2;
        n /= 2;
        while(n){
            int b2 = n%2;
            n /= 2;
            if(b1 == b2) return false;
            b1 = b2;
        }
        return true;
    }
};