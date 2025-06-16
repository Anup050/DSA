class Solution {
public:
    vector<int> replaceElements(vector<int>& v) {
        int j = v.size()-1;
        int maxi = v[j];
        v[j] = -1;
        for(int i=j-1; i>=0; i--){
            int ele = v[i];
            v[i] = maxi;
            maxi = max(maxi,ele);  
        }
        return v;
    }
};