class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(begin(costs), end(costs));
        int count = 0;
        long long sum = 0;
        for(int i : costs){
            sum += i;
            if(sum <= coins) count++;
        }
        return count;
    }
};