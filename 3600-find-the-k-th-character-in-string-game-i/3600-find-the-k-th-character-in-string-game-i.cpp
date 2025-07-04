class Solution {
public:
    char kthCharacter(int k) {
        vector<int> w;
        w.push_back(0);

        while (w.size() < k) {
            int n = w.size();
            for (int i = 0; i < n; i++) {
                w.push_back((w[i] + 1) % 26);
            }
        }

        return 'a' + w[k - 1];
    }
};