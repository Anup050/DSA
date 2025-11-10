class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i : nums){
            string str = to_string(i);
            if(str.length()>1) sum2 += i;
            else sum1 += i;
        }
        return (sum1 == sum2) ? false : true;
    }
};