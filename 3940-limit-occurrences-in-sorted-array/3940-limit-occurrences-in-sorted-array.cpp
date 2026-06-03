class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i : nums) mp[i]++;
        vector<int> ans;
        for(int i : nums){
            if(mp.find(i) != mp.end()){
                if(mp[i] >= k){
                    int f=k;
                    while(f){
                        ans.push_back(i);
                        f--;
                    }
                }else{
                    int f = mp[i];
                    while(f){
                        ans.push_back(i);
                        f--;
                    }
                }
                mp.erase(i);
            }
        }
        return ans;
    }
};