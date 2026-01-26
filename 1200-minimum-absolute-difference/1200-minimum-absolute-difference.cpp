class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int minD = INT_MAX;
        int n = arr.size();
        for(int i=1; i<n; i++){
            minD = min(minD, arr[i]-arr[i-1]);
        }
        for(int i=1; i<n; i++){
            vector<int> v;
            if((arr[i] - arr[i-1]) == minD){
                v.push_back(arr[i-1]);
                v.push_back(arr[i]);
            }
            if(!v.empty()) ans.push_back(v);
        }
        return ans;
    }
};