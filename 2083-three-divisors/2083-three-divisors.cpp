class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        if(n<3) return false;
        int i=0;
        while(i++<=n){
            if(n%i==0)count++;
            if(count>3) return false;
        }
        return (count == 3) ? true : false;
    }
};