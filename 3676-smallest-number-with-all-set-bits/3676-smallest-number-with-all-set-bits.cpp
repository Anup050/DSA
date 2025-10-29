class Solution {
public:
    int smallestNumber(int n) {
        int sum = 1;
        int fact = 1;
        while(sum<n){
            fact *= 2;
            sum += fact;
        }
        return sum;
    }
};