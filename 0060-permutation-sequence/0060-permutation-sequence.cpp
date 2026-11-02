class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";
        for(int i=1; i<=n; i++) ans += to_string(i);
        while(--k){
            next_permutation(begin(ans), end(ans));
        }
        return ans;
    }
};