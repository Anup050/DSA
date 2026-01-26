class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int makePalindrome(int x) {
        int res = x;
        x /= 10;
        while (x) {
            res = res * 10 + (x % 10);
            x /= 10;
        }
        return res;
    }

    int primePalindrome(int n) {
        if (n <= 11) {
            for (int i = n; i <= 11; i++) {
                if (isPrime(i)) return i;
            }
        }
        for (int i = 1; i < 100000; i++) {
            int pal = makePalindrome(i);
            if (pal >= n && isPrime(pal)) {
                return pal;
            }
        }
        return -1;
    }
};
