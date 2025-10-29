class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // int sum = 0;
        // for(int i=0; i<bills.size(); i++){
        //     if(bills[i] == 5){
        //         sum += 5;
        //     }else if(bills[i] == 20){
        //         sum -= 10;
        //     }
        // }
        // return (sum > 0) ? true : false;
        int f = 0,t = 0;
        for(int  i : bills){
            if(i == 5){ 
                f++;
            } else if(i == 10){
                t++;
                if(f>0){
                    f--;
                }else{
                    return false;
                }
            }else{
                if(t>0 && f>0){
                    t--;
                    f--;
                }else if(t <= 0 && f >= 3){
                    f -= 3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};