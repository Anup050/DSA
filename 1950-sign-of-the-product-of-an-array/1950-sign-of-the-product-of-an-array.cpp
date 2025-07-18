class Solution {
public:
    int arraySign(vector<int>& nums) {
        int nCount = 0;
        for(int i : nums){
            if( i == 0) return 0;
            else if(i < 0) nCount++;
        }
        return (nCount%2==0) ? 1 : -1;
    }
};