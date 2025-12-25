class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(begin(happiness), end(happiness));
        long long tSum = 0;
        int n = happiness.size()-1;
        int i=0;
        while(k){
            if((happiness[n] - i)>0){
                tSum += (happiness[n] - i);
            }
            n--;
            i++;
            k--;
        }
        return tSum;
    }
};