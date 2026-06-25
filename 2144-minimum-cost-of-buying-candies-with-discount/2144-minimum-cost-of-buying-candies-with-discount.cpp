class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(begin(cost), end(cost));
        int minC = 0;
        int n = cost.size()-1;
        while(n >= 0){
            minC += cost[n];
            n--;
            if(n >= 0) minC += cost[n];
            n -= 2;
        }
        return minC;
    }
};