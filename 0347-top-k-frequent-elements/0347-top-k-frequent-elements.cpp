class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int num : nums) mp[num]++;
        priority_queue<pair<int,int>> pq;
        for(auto i : mp){
            pq.push({i.second,i.first});
        }
        while(k){
            pair<int,int> p = pq.top();
            v.push_back(p.second);
            pq.pop();
            k--;
        }
        return v;
        
    }
};