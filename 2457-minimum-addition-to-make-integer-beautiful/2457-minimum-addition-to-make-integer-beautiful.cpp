
class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long original = n;
        long long nums = n;
        int i = 0;
        while(true) {
            long long sum = 0;
            long long temp = nums;
            while(temp) {
                sum += temp % 10;
                temp /= 10;
            }
            if(sum <= target) {
                return nums - original;
            }
            string s = to_string(nums);
            int len = s.length();
            if(i < len) {
                int pos = len - 1 - i;
                s[pos] = '0';
                int j = pos - 1;
                while(j >= 0 && s[j] == '9') {
                    s[j] = '0';
                    j--;
                }
                if(j >= 0) {
                    s[j]++;
                } else {
                    s = "1" + s;
                }
                nums = stoll(s);
                i++;
            }
        }
    }
};
