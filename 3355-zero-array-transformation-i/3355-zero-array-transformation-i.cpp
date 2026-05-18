class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> v(n,0);
        for(auto &i : queries){
            int x = i[0];
            int y = i[1];
            v[x]++;
            if(y+1 < n) v[y+1]--; 
        }
        for(int i=1; i<n; i++){
            v[i] += v[i-1]; 
        }
        for(int i=0; i<n; i++){
            if(nums[i] > v[i]) return false;
        }
        return true;
    }
};