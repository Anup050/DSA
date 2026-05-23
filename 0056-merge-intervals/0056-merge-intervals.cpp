class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        vector<vector<int>> ans;
        int minE = intervals[0][0];
        int maxE = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            int a = intervals[i][0];
            int b = intervals[i][1];
            if(maxE >= a){
                minE = min(minE, a);
                maxE = max(maxE, b);
            }else{
                ans.push_back({minE, maxE});
                minE = a;
                maxE = b;
            }
        }
        ans.push_back({minE, maxE});
        return ans;
    }
};