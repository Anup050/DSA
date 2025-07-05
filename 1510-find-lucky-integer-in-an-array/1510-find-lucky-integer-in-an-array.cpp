class Solution {
public:
    int findLucky(vector<int>& arr) {
        int lucky = -1;
        unordered_map<int,int> mp;

        for(int i : arr){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.first == i.second){
                lucky = max(lucky,i.first);
            }
        }
        return lucky;
    }
};