class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int l = n.size();
        vector<int> p(l);
        vector<int> s(l);
        p[0] = 1;
        s[l-1] = 1;
        int product = n[0];
        for(int i=1;i<l;i++){
            p[i] = product;
            product *= n[i];
        }
        product = n[l-1];
        for(int i=l-2;i>=0;i--){
            s[i] = product;
            product *= n[i];

        }
        for(int i=0; i<l; i++){
            n[i] = p[i]*s[i];
        }
        return n;
    }

};