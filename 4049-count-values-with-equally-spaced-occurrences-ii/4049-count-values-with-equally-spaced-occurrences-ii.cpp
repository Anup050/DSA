class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        for(auto i : mp){
            if(i.second.size() >= 3){
                vector<int> v = i.second;
                bool flag = true;
                int x = v[1]-v[0];
                for(int i=2; i<v.size(); i++){
                    if(v[i]-v[i-1] != x){
                        flag = false;
                        break;
                    }
                }
                if(flag) count++;
            }
        }
        return count;
    }
};