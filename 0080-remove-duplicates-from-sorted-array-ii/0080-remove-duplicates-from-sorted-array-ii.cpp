class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // map<int,int> mp;
        // int index = 0;

        // for(int i : nums){
        //     mp[i]++;
        // }

        // for(auto i : mp){
        //     if(i.second < 3){
        //         for(int j = 1; j<=i.second; j++){
        //             nums[index++] = i.first;
        //         }
        //     }else{
        //         for(int j = 1; j<=2; j++){
        //             nums[index++] = i.first;
        //         }
        //     }
        // }
        // return index;

        int n = nums.size();
        if(n <= 2) return n;
        int i=2;
        for(int j=2; j<n; j++){
            if(nums[j] != nums[i-2]){
                nums[i++] = nums[j];
            }
        }
        return i;
    }
};