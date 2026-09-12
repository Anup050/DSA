class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int num : nums) mp[num]++;
        // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        // for(auto i : mp){
        //     pq.push({i.second,i.first});
        //     if(pq.size() > k) pq.pop();
        // }
        // while(k){
        //     pair<int,int> p = pq.top();
        //     v.push_back(p.second);
        //     pq.pop();
        //     k--;
        // }
        vector<vector<int>> ans(nums.size()+1);
        for(auto i : mp){
            ans[i.second].push_back(i.first);
        }
        for(int i=ans.size()-1; i>=0; i--){
            vector<int> vt = ans[i];
            int n = vt.size();
            while(n){
                v.push_back(vt[--n]);
            }
            if(v.size() == k) break;
        }
        return v;


        
    }
};