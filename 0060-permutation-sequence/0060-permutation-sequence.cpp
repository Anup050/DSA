class Solution {
public:
    void nextPermutation(string &str) {
        int n = str.size();
        int i = n-2;
        while(i >= 0 && str[i] >= str[i+1]) i--;
        if(i >= 0){
            int j = n-1;
            while(j >= 0 && str[j] <= str[i]) j--;
            swap(str[j], str[i]);
        }
        reverse(begin(str)+i+1, end(str));
    }
    string getPermutation(int n, int k) {
        string ans = "";
        for(int i=1; i<=n; i++) ans += to_string(i);
        while(--k){
            nextPermutation(ans);
        }
        return ans;
    }
};