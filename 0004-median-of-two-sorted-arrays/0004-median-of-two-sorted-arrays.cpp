class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int count = 0;
        int idx1 = (n+m)/2;
        int idx2 = idx1-1;
        double ele1 = 0;
        double ele2 = 0;
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                if(idx1 == count) ele1 = nums1[i];
                if(idx2 == count) ele2 = nums1[i];
                i++;
            }else{
                if(idx1 == count) ele1 = nums2[j];
                if(idx2 == count) ele2 = nums2[j];
                j++;
            }
            count++;
        }
        while(i<n){
            if(idx1 == count) ele1 = nums1[i];
            if(idx2 == count) ele2 = nums1[i];
            count++;
            i++;
        }
        while(j<m){
            if(idx1 == count) ele1 = nums2[j];
            if(idx2 == count) ele2 = nums2[j];
            count++;
            j++;
        }
        return ((n+m)%2==0) ? (ele1+ele2)/2.0 : ele1;
    }
};