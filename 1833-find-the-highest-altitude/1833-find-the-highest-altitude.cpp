class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int h = 0;
        for(int i : gain){
            sum += i;
            h = max(h,sum);
        }
        return h;
    }
};