class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums;

        if (nums.size() <= 1) return nums;

        int mid = nums.size() / 2;

        // Create left and right subarrays
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        // Recursive sort
        left = sortArray(left);
        right = sortArray(right);

        return merge(left, right);
    }

private:
    vector<int> merge(const vector<int>& first, const vector<int>& second) {
        int i = 0, j = 0;
        vector<int> mix;

        while (i < first.size() && j < second.size()) {
            if (first[i] < second[j]) {
                mix.push_back(first[i]);
                i++;
            } else {
                mix.push_back(second[j]);
                j++;
            }
        }

        // Copy remaining elements
        while (i < first.size()) {
            mix.push_back(first[i]);
            i++;
        }

        while (j < second.size()) {
            mix.push_back(second[j]);
            j++;
        }

        return mix;
    }
};