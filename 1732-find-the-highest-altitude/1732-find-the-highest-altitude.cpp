class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int hA = 0;
        int pS = 0;
        for(int i : gain){
            pS += i;
            hA = max(hA,pS);
        }
        return hA;
    }
};