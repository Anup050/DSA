class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n*n; i++){
            mp[grid[i/n][i%n]]++;
        }
        int mis = -1, rep = -1;
        for(auto i : mp){
            if(i.second != 1){
                rep = i.first;
                break;
            }
        }
        for(int i=1; i<=n*n; i++){
            if(mp.find(i) == mp.end()){
                mis = i;
                break;
            }
        }
        return {rep,mis};
    }
};