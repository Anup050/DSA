class Solution {
public:
    int findClosest(int x, int y, int z) {


        return (abs(z-x) < abs(z-y)) ? 1 : (abs(z-x) > abs(z-y)) ? 2 : 0;
        //int count1 = 0, count2 = 0;
        // if(x<z){
        //     // while(x != z){
        //     //     x++;
        //     //     count1++;
        //     // }
        //     count1 = z-x;
        // }else if(x > z){
        //     // while(x != z){
        //     //     x--;
        //     //     count1++;
        //     // }
        //     count1 = x-z;
        // }

        //  if(y<z){
        //     // while(y != z){
        //     //     y++;
        //     //     count2++;
        //     // }
        //     count2 = z-y;
        // }else if(y > z){
        //     // while(y != z){
        //     //     y--;
        //     //     count2++;
        //     // }
        //     count2 = y-z;
        // }
        //return (count1 < count2) ? 1 : (count2 < count1) ? 2 : 0;
    }
};