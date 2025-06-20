class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        // int buy = prices[0];

        // for(int i=1; i<n; i++){
        //     if(prices[i] < buy){
        //         buy = prices[i];
        //     }else{
        //         maxProfit += (prices[i] - buy);
        //         buy = prices[i];
        //     }
        // }
        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }
};