class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1 = 0;
        int rev2 = 0;
        int n = num;
        while(n){
            int d = n%10;
            rev1 = (rev1*10)+d;
            n /= 10;
        }
        while(rev1){
            int d = rev1%10;
            rev2 = (rev2*10) +d;
            rev1 /= 10;
        }
        return rev2 == num;
    }
};