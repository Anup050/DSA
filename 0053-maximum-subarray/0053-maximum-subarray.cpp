class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int l = v.size();
        int cSum= 0;
        int maxSum = v[0];
        for(int i=0; i<l; i++){
            cSum += v[i];
            maxSum = max(maxSum,cSum);
            if(cSum < 0){
                cSum = 0;
            }
        }
        return maxSum;

        
    }
};