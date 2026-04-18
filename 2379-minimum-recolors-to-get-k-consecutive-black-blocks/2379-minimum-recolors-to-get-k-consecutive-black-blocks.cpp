class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int wB = 0;
        for(int i=0; i<k; i++){
            if(blocks[i] == 'W') wB++;
        }
        int count = wB;
        for(int i=k; i<blocks.length(); i++){
            if(blocks[i] == 'W') wB++;
            if(blocks[i-k] == 'W') wB--;
            count = min(count, wB);
        }
        return count;
    }
};