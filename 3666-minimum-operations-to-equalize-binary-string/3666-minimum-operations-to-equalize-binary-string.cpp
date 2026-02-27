class Solution {
public:
    int minOperations(string s, int k) {
        int n = s.length();

        int startZeros = 0;
        for(char &ch : s)
            if(ch == '0') startZeros++;

        if(startZeros == 0) return 0;

        vector<int> dist(n + 1, -1);

        set<int> evenSet, oddSet;
        for(int i = 0; i <= n; i++) {
            if(i % 2 == 0) evenSet.insert(i);
            else oddSet.insert(i);
        }

        queue<int> q;
        q.push(startZeros);
        dist[startZeros] = 0;

        if(startZeros % 2 == 0) evenSet.erase(startZeros);
        else oddSet.erase(startZeros);

        while(!q.empty()) {
            int z = q.front();
            q.pop();

            int minF = max(0, k - (n - z));
            int maxF = min(k, z);

            int min_new_z = z + k - 2 * maxF;
            int max_new_z = z + k - 2 * minF;

            set<int>& currSet = (min_new_z % 2 == 0) ? evenSet : oddSet;

            auto it = currSet.lower_bound(min_new_z);

            while(it != currSet.end() && *it <= max_new_z) {
                int newZ = *it;
                it = currSet.erase(it);

                dist[newZ] = dist[z] + 1;
                if(newZ == 0) return dist[newZ];

                q.push(newZ);
            }
        }

        return -1;
    }
};