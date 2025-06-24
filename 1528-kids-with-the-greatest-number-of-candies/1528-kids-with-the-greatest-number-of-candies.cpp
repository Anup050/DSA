class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int n = candies.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi,candies[i]);
        }
        for(int i=0;i<n; i++){
            int res = candies[i] + extraCandies;
            if(res >= maxi){
                v.push_back(true);
            }else{
                v.push_back(false);
            }
        }
        return v;
    }
};