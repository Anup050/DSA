class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1(nums.size()/2);
        vector<int> v2(nums.size()/2);
        vector<int> res(nums.size());
        int j=0,k=0;
        for(int i : nums){
            if(i>0){
                v1[j++] = i;
            }else{
                v2[k++] = i;
            }
        }
        int i=0;
        j=0,k=0;
        while(j<v1.size() && k<v2.size()){
            res[i++] = v1[j++];
            res[i++] = v2[k++];
        }
        return res;
    }
};