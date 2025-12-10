class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        const int MOD = 1e9+7;
        int result = 1;
        for(int i=1; i<complexity.size(); i++){
            if(complexity[0]>=complexity[i]) return 0;
            result = (1LL* result * i)%MOD;
        }
        return result;
    }
};