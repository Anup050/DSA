class Solution {
public:
    bool isPrime(int p) {
        if (p < 2) return false;
        for (int j = 2; j * j <= p; j++) {
            if (p % j == 0) return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int prime = 0;
        int n = nums.size();
        vector<int> v;

        for (int i = 0; i < n; i++) {
            v.push_back(nums[i][i]);
            v.push_back(nums[i][n - i - 1]);
        }

        for (int i = 0; i < v.size(); i++) {
            if (isPrime(v[i])) {
                prime = max(prime, v[i]);
            }
        }

        return prime;
    }
};
