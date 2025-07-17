class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int r = n/20;
        double sum = 0;
        for(int i=r; i<n-r; i++){
            sum += arr[i];
        }
        return sum/(n-2*r);
    }
};