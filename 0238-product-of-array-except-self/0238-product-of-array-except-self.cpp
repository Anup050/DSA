class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int l = n.size();
        vector<int> p(l);
        p[0] = 1;
        int product = n[0];
        for(int i=1;i<l;i++){
            p[i] = product;
            product *= n[i];
        }
        product = n[l-1];
        for(int i=l-2;i>=0;i--){
            p[i] *= product;
            product *= n[i];

        }
        return p;
    }

};