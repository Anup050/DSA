class Solution {
public:
    int encrypt(int n){
        if(n<10) return n;
        int temp = n;
        int digit = 0;
        int mnum = 0;
        while(temp){
            mnum = max(mnum, temp%10);
            digit++;
            temp /= 10;
        }
        int sum = 0;
        while(digit){
            sum = (sum*10) + mnum;
            digit--;
        }
        return sum;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            nums[i] = encrypt(nums[i]);
        }
        for(int i : nums){
            sum += i;
        }
        return sum;
    }
};