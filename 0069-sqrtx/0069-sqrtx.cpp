class Solution {
public:
    int mySqrt(int x) {
        int start = 0, end = x;
        while(start <= end){
            long mid = start + (end-start)/2;
            long sq = mid*mid;
            if(sq == x) return mid;
            else if(sq < x) start = mid + 1;
            else end = mid-1;
        }
        return end;
    }
};