class Solution {
public:
    int square(int n){
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = square(n);
        int fast = square(square(n));

        while(slow != fast){
            slow = square(slow);
            fast = square(square(fast));
        }
        return slow == 1;
    }
};