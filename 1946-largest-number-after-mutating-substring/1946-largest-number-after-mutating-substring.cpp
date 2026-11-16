class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int i=0;
        bool flag = false;
        while(i<num.length()){
            int n = num[i] - '0';
            if(n < change[n]){
                num[i] = change[n] + '0';
                flag = true;
            }else if(n > change[n]){
                if(flag) return num;
            }
            i++;
        }
        return num;
    }
};