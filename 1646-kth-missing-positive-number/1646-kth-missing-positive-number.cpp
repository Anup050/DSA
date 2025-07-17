class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int> s;
        vector<int> v;
        for(int i : arr){
            s.insert(i);
        }
        for(int i=1; i<=arr.size()+k; i++){
            if(s.find(i) == s.end()){
                v.push_back(i);
            }
        }
        return v[k-1];
    }
};