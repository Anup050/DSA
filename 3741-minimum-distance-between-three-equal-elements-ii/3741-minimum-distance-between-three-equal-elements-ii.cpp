class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int,vector<int>>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        for(auto i : mp){
            if(i.second.size() >= 3){
                vector<int> v = i.second;
                int j = 0;
                while(j+2<v.size()){
                    ans = min(ans, abs(v[j]-v[j+1])+ abs(v[j+1]-v[j+2])+ abs(v[j+2]- v[j]));
                    j++;
                }
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};