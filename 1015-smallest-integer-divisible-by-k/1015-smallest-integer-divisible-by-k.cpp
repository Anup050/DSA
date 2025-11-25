class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long num = 0;
        int n = k;
        int count = 0;
        while(n--){
            num  = ((num*10)+1)%k;
            count++;
            if(num == 0){
                return count;
            }
        }
        return -1;
    }
};