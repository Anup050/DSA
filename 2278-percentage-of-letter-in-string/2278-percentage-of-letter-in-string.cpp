class Solution {
public:
    int percentageLetter(string s, char letter) {
        double count = 0;
        for(char c : s){
            if(c == letter) count++;
        }
        double a = (count/s.length())*100.00;
        return (int)a;
    }
};