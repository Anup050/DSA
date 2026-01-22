class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int rm = 10;
        while(n){
            n -= rm;
            rm--;
            if(n < rm){
                return (rm%2==0) ? false : true;
            } 
        }
        return false;
    }
};