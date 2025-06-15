class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        // int index = 1;

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] != nums[i - 1]) {  
        //         nums[index] = nums[i];
        //         index++;
        //     }
        // }
        // return index;
        set<int> s(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        int index = 0;
        for(auto i : s){
            nums[index] = i;
            index++;
        }
        return index;
    }
};
