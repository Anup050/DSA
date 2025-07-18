class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {

        unordered_set<int> s;

        int n = nums.size();
        
        for(int i=0; i<n; i++){
            int rev = 0;
            int ele = nums[i];
            while(ele){
                rev = rev*10 + (ele%10);
                ele /= 10;
            }
            s.insert(nums[i]);
            s.insert(rev);
        }
        
        return s.size();
    }
};