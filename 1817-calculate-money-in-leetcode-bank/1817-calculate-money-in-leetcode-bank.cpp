class Solution {
public:
    int totalMoney(int n) {
        long sum = 0;
        int mon = 1;
        while(n){
            int count = 0;
            if(n>=7){
                count = 7;
                n -= 7;
            }else{
                count = n;
                n -= n;
            }
            for(int i=mon; i<count+mon; i++){
                sum += i;
            }
            mon++;
        }
        return sum;
    }
};