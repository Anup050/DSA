class Solution {
public:
    void moveZeroes(vector<int>& v) {
         int idx = 0;
         for(int i=0; i<v.size(); i++){
            if(v[i] != 0) swap(v[idx++],v[i]);
         }
    }
};