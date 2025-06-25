// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         if(num == 1) return true;
//         for(long i=1; i*i<=num; i++){
//             if(i*i == num) return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;

        long left = 1, right = num / 2 + 1;
        
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long square = mid * mid;

            if (square == num) return true;
            else if (square < num) left = mid + 1;
            else right = mid - 1;
        }
        
        return false;
    }
};
