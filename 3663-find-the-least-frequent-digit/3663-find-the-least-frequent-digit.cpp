class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> mp;
        while(n){
            mp[n%10]++;
            n /= 10;
        }
        int minE = INT_MAX;
        int minF = INT_MAX;
        for(auto &i : mp){
            if(i.second < minF){
                minF = i.second;
                minE = i.first;
            }else if(i.second == minF){
                minE = min(minE,i.first);
            }
        }
        return minE;
    }
};