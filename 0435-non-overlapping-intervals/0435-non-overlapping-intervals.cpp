class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        int count = 0;
        int endInt = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            vector<int> p = intervals[i];
            if(endInt <= p[0]){
                endInt = p[1];
            }else{
                count++;
                endInt = min(endInt, p[1]);
            }
        }
        return count;
    }
};