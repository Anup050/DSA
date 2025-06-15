class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int i = 0;
        for(int j=0; j<v.size(); j++){
            if(v[j] !=0){
                swap(v[i++],v[j]);
            }
        }
    }
};