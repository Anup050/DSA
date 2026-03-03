class Solution {
public:
    string invert(string str){
        int n = str.length();
        int i=0;
        string s = "";
        while(i<n){
            if(str[i] == '1') s += '0';
            else s += '1';
            i++;
        }
        return s;
    }
    char findKthBit(int n, int k) {
        vector<string> v(n);
        v[0] = '0';
        for(int i=1; i<n; i++){
            string s = invert(v[i-1]);
            reverse(begin(s), end(s));
            v[i] = (v[i-1] + '1' + s);
        }
        string st = v[n-1];
        return st[k-1]; 
    }
};