class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int count = 0;

        unordered_map<int,int> rt;
        unordered_map<int,int> lt;
        for(int i : nums){
            rt[i]++;
        }
        for(int num : nums){
            rt[num]--;

            int left = lt[num*2];
            int right = rt[num*2];

            count = (count + (1LL * left * right))%MOD;
            lt[num]++;
        }
        return count;
    }
};