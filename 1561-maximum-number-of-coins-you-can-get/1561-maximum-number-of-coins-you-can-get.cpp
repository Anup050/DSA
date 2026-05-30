class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(begin(piles), end(piles));
        int sum = 0;
        int n = piles.size();
        int i = n-2;
        while(n){
            sum += piles[i];
            i -= 2;
            n -= 3;
        }
        return sum;
    }
};