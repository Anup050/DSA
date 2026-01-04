class Solution {
public:
    void checkD(int val, long long &sum){
        int s = 0;
        int count = 0;
        for(int i=1; i<=val; i++){
            if(val%i == 0){
                count++;
                s += i;
            }
            if(count>4) break;
        }
        if(count == 4) sum += s;
    }
    int sumFourDivisors(vector<int>& nums) {
        long long sum = 0;
        for(int i : nums){
            checkD(i, sum);
        }
        return sum;
    }
};