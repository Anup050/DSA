class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int prevC = 0, oC = 0, i = 0, j = 0, res = 0;
        while(j<nums.size()){
            if(nums[j] % 2 != 0){
                oC++;
                prevC = 0;
            }
            while(oC == k){
                prevC++;
                if(nums[i]%2 != 0) oC--;
                i++;
            }
            res += prevC;
            j++;
        }
        return res;
        // int count = 0;
        // int res = 0;
        // unordered_map<int,int> mp;
        // mp[0]++;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]%2 == 1) count++;
        //     if(mp.find(count-k) != mp.end()){
        //         res += mp[count-k];
        //     }
        //     mp[count]++;
        // }
        // return res;
    }
};