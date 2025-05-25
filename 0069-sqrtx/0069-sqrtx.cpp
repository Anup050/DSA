class Solution {
public:
    int mySqrt(int x) {
        int f = 0, l = x;

        while(f<=l){
            long mid = f + (l-f)/2;
            if((mid*mid) == x) return mid;
            else if((mid*mid) > x) l = mid-1;
            else f = mid+1;
        }
        return l; 
    }
};