class Solution {
public:
    void solve(vector<string>& v, int n,int op, int cl,string s){
        
        if(cl==n){
            v.push_back(s);
            return;
        }

        if(op<n) solve(v,n,op+1,cl,s+'(');
        if(cl<op) solve(v,n,op,cl+1,s+')');

    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string temp="";
        solve(v, n, 0, 0,temp);
        return v;
    }
};