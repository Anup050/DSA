class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int m = nums[i];
            vector<int> v1;
            while(m > 0){
                int digit = m%10;
                m /= 10;
                v1.push_back(digit);
            }
            for(int j=v1.size()-1; j>=0; j--){
                v.push_back(v1[j]);
            }
        }
        return v;
    }
};