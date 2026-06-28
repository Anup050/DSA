class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(begin(arr), end(arr));
        int maxE = 1;
        arr[0] = 1;
        for(int i=1; i<arr.size(); i++){
            if(abs(arr[i-1] - arr[i]) > 1){
               maxE++;
               arr[i] = arr[i-1] + 1;
            }else{
                maxE = max(maxE, arr[i]);
            }
        }
        return maxE;
    }
};