class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
        int sum = 0;
        for(int i=0; i<s.length(); i++){
            if(i+1 < s.length()){
                int a = mp[s[i]];
                int b = mp[s[i+1]];
                if(a<b){
                    sum -= a;
                }else{
                    sum += a;
                }
            }else{
                sum += mp[s[i]];
            }
        }
        return sum;
    }
};