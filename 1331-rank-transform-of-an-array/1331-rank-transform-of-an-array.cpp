class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> v(n);
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]].push_back(i);
        }
        sort(begin(arr), end(arr));
        int count = 1;
        for(int i=0; i<n; i++){
            if(i > 0 && (arr[i] != arr[i-1])) count++;
            v[mp[arr[i]].back()] = count;
            mp[arr[i]].pop_back();
        }
        return v;
    }
};