class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<vector<int>> v;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == x){
                v.push_back({x,i});
            }
        }
        vector<int> ans;
        for(int i : queries){
            if(i <= v.size()){
                ans.push_back(v[i-1][1]);
            }else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};