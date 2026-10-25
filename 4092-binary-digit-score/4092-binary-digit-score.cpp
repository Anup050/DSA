class Solution {
public:
    int calculateScore(int a, int b) {
        int aValue = 0;
        int bValue = 0;
        while(a){
            aValue += (a%2);
            a /= 2;
        }
        while(b){
            bValue += (b%2);
            b /= 2;
        }
        return (aValue >= bValue) ? aValue * bValue : bValue/aValue;
    }
};