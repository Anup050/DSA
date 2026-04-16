class Solution {
public:
    int lowerBound(vector<int>& v, int target) {
        int l = 0, r = v.size() - 1, ans = v.size();
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (v[mid] >= target) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < n; i++) {
            pos[nums[i]].push_back(i);
        }
        vector<int> ans;
        for (int q : queries) {
            auto &v = pos[nums[q]];
            if (v.size() == 1) {
                ans.push_back(-1);
                continue;
            }
            int idx = lowerBound(v, q);
            if (idx == v.size() || v[idx] != q) continue;
            int nextIdx = v[(idx + 1) % v.size()];
            int prevIdx = v[(idx - 1 + v.size()) % v.size()];
            int d1 = abs(q - nextIdx);
            int d2 = abs(q - prevIdx);
            int res = min({d1, n - d1, d2, n - d2});
            ans.push_back(res);
        }
        return ans;
    }
};