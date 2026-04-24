class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L = 0;
        int R = 0;
        for(char c : moves){
            if(c == 'L'){
                L--;
                R--;
            }else if(c == 'R'){
                L++;
                R++;
            }else{
                L--;
                R++;
            }
        }
        return max(abs(L), abs(R));
    }
};