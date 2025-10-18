class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        // 2 pass : O(N)time + O(n)extra space

        // vector<int> v1(nums.size()/2);
        // vector<int> v2(nums.size()/2);
        // int j=0,k=0;
        // for(int i : nums){
        //     if(i>0){
        //         v1[j++] = i;
        //     }else{
        //         v2[k++] = i;
        //     }
        // }
        // int i=0;
        // j=0,k=0;
        // while(j<v1.size() && k<v2.size()){
        //     nums[i++] = v1[j++];
        //     nums[i++] = v2[k++];
        // }
        // return nums;

        // 1 pass : O(N)time + O(n)extra space
        vector<int> ans(nums.size());
        int j = 0, k = 1;
        for(int i : nums){
            if(i>0){
                ans[j] = i;
                j += 2;
            }else{
                ans[k] = i;
                k += 2;
            }
        }
        return ans;
    }
};