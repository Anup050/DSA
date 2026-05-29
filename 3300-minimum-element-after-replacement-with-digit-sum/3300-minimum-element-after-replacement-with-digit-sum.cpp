class Solution {
public:
    int minElement(vector<int>& nums) {
        int minE = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int num = 0;
            while (n) {
                int d = n % 10;
                num += d;
                n /= 10;
            }
            minE = min(minE, num);
            nums[i] = num;
        }
        return minE;
    }
};