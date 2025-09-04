class Solution {
public:
    int findClosest(int x, int y, int z) {
        int count1 = 0, count2 = 0;
        if(x<z){
            while(x != z){
                x++;
                count1++;
            }
        }else if(x > z){
            while(x != z){
                x--;
                count1++;
            }
        }

         if(y<z){
            while(y != z){
                y++;
                count2++;
            }
        }else if(y > z){
            while(y != z){
                y--;
                count2++;
            }
        }
        return (count1 < count2) ? 1 : (count2 < count1) ? 2 : 0;
    }
};