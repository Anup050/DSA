class Solution {
public:
    int missingNumber(vector<int>& num) {
        int l = num.size();
        int sum = (l*(l+1))/2;
        int vsum = 0;
        for(int i=0; i<l; i++){
            vsum += num[i];
        }
        int mis = sum - vsum;
        return mis;
    }
};