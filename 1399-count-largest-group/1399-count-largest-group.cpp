class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        long long maxL = INT_MIN;
        int count = 0;
        for(int i=1; i<=n; i++){
            int v=i;
            long long sum = 0;
            while(v){
                sum += (v%10);
                v /= 10;
            }
            mp[sum]++;
            long long l = mp[sum];
            maxL = max(maxL, l);
        }
        for(auto i : mp){
            if(i.second == maxL) count++;
        }
        return count;
    }
};