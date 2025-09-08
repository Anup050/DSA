class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            string s1 = to_string(i);
            string s2 = to_string(n-i);
            if(!s1.contains("0") && !s2.contains("0")){
                return {i,n-i};
            }
        }
        return {-1,-1};
    }
};