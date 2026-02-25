class Solution {
public:
    int count(int x){
        int fq = 0;
        if(x == 0) return 0;
        while(x){
            fq += (x&1);
            x >>= 1;
        }
        return fq;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> p;
        for(int i : arr){
            p.push_back({count(i), i});
        }
        sort(begin(p),end(p));
        vector<int> v;
        for(auto i : p){
            v.push_back(i.second);
        }
        return v;
    }
};