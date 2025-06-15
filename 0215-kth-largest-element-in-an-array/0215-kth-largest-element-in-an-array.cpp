class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //O(nlogn) time , O(1) space

        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[n-k];

        //O(nlogk) time , O(k) space
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k)
            minHeap.pop();
        }
        return minHeap.top();
    }
};