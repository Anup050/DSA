class Solution {
public:
    int minOperations(int n) {
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            arr[i] = (2*i)+1;
        }
        int avg = (accumulate(begin(arr), end(arr), 0)/n);
        int count = 0;
        for(int i : arr) count += abs(avg-i);
        return count/2;
    }
};