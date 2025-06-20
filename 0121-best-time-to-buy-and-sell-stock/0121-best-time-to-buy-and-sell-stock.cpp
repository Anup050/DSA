class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy = p[0];
        int maxProfit = 0;
        int l = p.size();

        for(int i=1; i<l;i++){
            if(p[i] < buy){
                buy = p[i];
            }else{
                maxProfit = max(maxProfit, p[i] - buy);
            }
        }
        return maxProfit;
        
    }
};