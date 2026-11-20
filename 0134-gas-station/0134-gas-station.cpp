class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tsum=0;
        int tank=0;
        int n=gas.size();
        int idx=0;
        for(int i=0;i<n;i++){
            int diff=gas[i]-cost[i];
            tsum+=diff;
            tank+=diff;
            if(tank<0){
                tank=0;
                idx=i+1;
            }
        }
        if(tsum>=0) return idx;
        else return -1;
    }
};