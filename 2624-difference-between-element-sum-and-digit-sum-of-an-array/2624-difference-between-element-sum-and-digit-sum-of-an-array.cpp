class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0;
        int dSum = 0;

        for(int i : nums){
            int n = i;
            eSum += n;
            while(n){
                dSum += n%10;
                n /= 10;
            }
        }
        return abs(eSum - dSum);
    }
};