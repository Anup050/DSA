class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        unordered_map<int,int> mp;
        for (int x : arr1) {
            mp[x]++;
        }
        for (int x : arr2) {
            int cnt = mp[x];
            while (cnt--) {
                v.push_back(x);
            }
            mp.erase(x);
        }
        vector<int> rem;
        for (auto &p : mp) {
            while (p.second--) {
                rem.push_back(p.first);
            }
        }
        sort(rem.begin(), rem.end());
        v.insert(v.end(), rem.begin(), rem.end());
        return v;
    }
};
