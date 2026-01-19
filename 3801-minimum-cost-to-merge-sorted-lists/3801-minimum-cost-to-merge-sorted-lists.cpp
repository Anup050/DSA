class Solution {
public:
    long long minMergeCost(vector<vector<int>>& lists) {
        int n = lists.size();
        int size = 1 << n;

        vector<long long> median(size), length(size), costs(size, 0);
        vector<vector<int>> bitToMask(n + 1);

        int totalLen = 0;
        for (auto& l : lists) totalLen += l.size();

        vector<long long> arr(totalLen);
        for (int mask = 1; mask < size; mask++) {
            int len = 0;
            int setBit = 0;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    setBit++;
                    for (int val : lists[i]) {
                        arr[len++] = val;
                    }
                }
            }

            sort(arr.begin(), arr.begin() + len);
            median[mask] = arr[(len - 1) / 2];
            length[mask] = len;
            bitToMask[setBit].push_back(mask);
        }

        for (int setBit = 2; setBit <= n; setBit++) {
            for (int mask : bitToMask[setBit]) {
                long long cost = LLONG_MAX;

                for (int i = 1; i <= mask / 2; i++) {
                    if ((i & mask) == i) {
                        int j = i ^ mask;
                        cost = min(cost,
                                   costs[i] + costs[j]
                                   + length[mask]
                                   + llabs(median[i] - median[j]));
                    }
                }

                costs[mask] = cost;
            }
        }

        return costs[size - 1];
    }
};
