class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool flag = true;
        int i = 0;
        while(i<bits.size()){
            if(bits[i] == 0){
                i++;
                flag = true;
            } 
            else{
                i += 2;
                flag = false;
            }
        }
        return flag;
    }
};