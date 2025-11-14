class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> mp;
        int maxCount = INT_MIN;
        for(int i=lowLimit; i<=highLimit; i++){
            int n = i;
            int sum = 0;
            while(n){
                int digit = n%10;
                sum += digit;
                n /= 10;
            }
            mp[sum]++;
            maxCount = max(maxCount,mp[sum]);
        }
        return maxCount;
    }
};