class Solution {
public:
    bool checkZeroOnes(string s) {
        int countO = 0;
        int countZ = 0;
        int count1 = 0;
        int count2 = 0;
        for(char c : s){
            if(c == '1'){
                count2 = 0;
                count1++;
                countO = max(countO, count1);
            }else{
                count1 = 0;
                count2++;
                countZ = max(countZ, count2);
            }
        }
        return countO > countZ;
    }
};