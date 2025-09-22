class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double m = 0;
        vector<int> ans(nums1.size()+nums2.size());
        int i=0,j=0,k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] <= nums2[j]){
                ans[k++] = nums1[i++];
            }else{
                ans[k++] = nums2[j++];
            }
        }
        while(i<nums1.size()){
            ans[k++] = nums1[i++];
        }
        while(j<nums2.size()){
            ans[k++] = nums2[j++];
        }
        int n = ans.size();
        if(n%2==0){
            int h = n/2;
            m = (ans[h]+ans[h-1])/2.0;
        }else{
            int h = n/2;
            m = ans[h];
        }
        return m;

    }
};