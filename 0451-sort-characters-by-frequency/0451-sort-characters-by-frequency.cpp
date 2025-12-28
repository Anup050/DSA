class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto i : mp) pq.push({i.second, i.first});
        while(!pq.empty()){
            pair<int,char> p = pq.top();
            ans += string(p.first, p.second);
            pq.pop();
        }
        return ans;
    }
};