class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        priority_queue<int> pq;
        for(int i : nums) pq.push(i);
        long long mSum = 0;
        while(k){
            if(mul > 0){
                mSum += (long long)pq.top() * mul;
                mul--;
            }else{
                mSum += pq.top();
            }
            pq.pop();
            k--;
        }
        return mSum;
    }
};