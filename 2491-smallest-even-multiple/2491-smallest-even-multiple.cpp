class Solution {
public:
    int smallestEvenMultiple(int n) {
        int num = n;
        while(num%2 !=0){
            num += n;
        }
        return num;
    }
};