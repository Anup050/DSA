class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        vector<pair<int,string>> v = {
            {1000,"M"}, {900,"CM"}, {500,"D"}, {400,"CD"},
            {100,"C"}, {90,"XC"}, {50,"L"}, {40,"XL"},
            {10,"X"}, {9,"IX"}, {5,"V"}, {4,"IV"}, {1,"I"}
        };
        while(num) {
            string str = to_string(num);
            int n = str.length();
            int ele = (str[0] - '0') * pow(10, n-1);
            for(auto i : v) {
                if(ele >= i.first) {
                    int times = ele / i.first;
                    num -= times * i.first;
                    for(int j = 0; j < times; j++) {
                        ans += i.second;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};