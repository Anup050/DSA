class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        vector<int> res(n);
        for(int i=0; i<n; i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        int i=0,j=0,k=0;
        while(k<n){
            if(k%2 == 0){
                res[k++] = even[i++];
            }else{
                res[k++] = odd[j++];
            }
        }
        return res;
    }
};