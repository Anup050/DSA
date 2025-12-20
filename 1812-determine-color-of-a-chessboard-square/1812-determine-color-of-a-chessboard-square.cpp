class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0] - 'a';
        int b = coordinates[1] - '0';
        if(a%2==0){
            if(b%2==0) return true;
            else return false;
        }else{
            if(b%2==0) return false;
            else return true;
        }
        return true;
    }
};