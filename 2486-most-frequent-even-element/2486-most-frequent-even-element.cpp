class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        int m = INT_MAX, fq = 0;
        for(int num : nums){
            if(num%2==0){
                mp[num]++;
            }
        }
        for(auto i : mp){
            if(i.second>fq){
                fq = i.second;
                m  = i.first;
            }
            if(i.second == fq && i.first<m){
                m = i.first;
            }
        }
        return (m == INT_MAX) ? -1 : m;
    }
};