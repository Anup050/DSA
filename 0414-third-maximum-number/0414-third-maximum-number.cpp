class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long fmax = LONG_MIN;
        long smax = LONG_MIN;
        long tmax = LONG_MIN;

        for (int num : nums) {
            if (num == fmax || num == smax || num == tmax) continue;

            if (num > fmax) {
                tmax = smax;
                smax = fmax;
                fmax = num;
            } else if (num > smax) {
                tmax = smax;
                smax = num;
            } else if (num > tmax) {
                tmax = num;
            }
        }

        return (tmax == LONG_MIN) ? fmax : tmax;
    }
};
