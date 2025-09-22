class Solution {
public:
    int getLucky(string s, int k) {
        int num = 0;
        string str = "";
        for(int i=0; i<s.length(); i++){
            string st = to_string((s[i] -'a') + 1);
            str += st;
        }
        for(int i=0; i<str.length(); i++){
            stringstream ss;
            ss << str[i];
            int n = 0;
            ss >> n;
            num += n;
               
        }
        k--;
        while(k){
            int n = 0;
            while(num){
                n += num%10;
                num /= 10;
            }
            num = n;
            k--;
        }
        return num;
    }
};