class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long maxS = LLONG_MIN;
        vector<long long> prefSum(n);
        prefSum[0] = nums[0];
        for(int i=1; i<n; i++){
            prefSum[i] = prefSum[i-1] + nums[i];
        }
        for(int start = 0; start < k; start++){
            int i = start;
            long long currS = 0;
            while(i<n && i+k-1<n){
                int j = i+k-1;
                long long subS = prefSum[j] -((i>0) ? prefSum[i-1] : 0);
                currS = max(subS, currS+subS);
                maxS = max(maxS, currS);
                i += k;
            }
        }
        return maxS;
    }
};