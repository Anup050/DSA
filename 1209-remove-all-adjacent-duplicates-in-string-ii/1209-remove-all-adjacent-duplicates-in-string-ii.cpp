class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans = "";
        for(int i=0; i<s.length(); i++){
            bool flag = true;
            ans += s[i];
            int n = ans.size();
            if(n>=k){
                int j = 0;
                while(j<k-1){
                    if(ans[n-j-1] != ans[n-j-2]){
                        flag  = false;
                        break;
                    }
                    j++;
                }
                if(flag){
                    int m = k;
                    while(m--){
                        ans.pop_back();
                    }
                }
            }
        }
        return ans;
    }
};