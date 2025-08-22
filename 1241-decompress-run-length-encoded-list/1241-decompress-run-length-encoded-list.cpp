class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        int i=0,j=1;
        while(j<nums.size()){
            int a = nums[i];
            int b = nums[j];
            while(a){
                v.push_back(b);
                a--;
            }
            i += 2;
            j += 2;
        }
        return v;
    }
};