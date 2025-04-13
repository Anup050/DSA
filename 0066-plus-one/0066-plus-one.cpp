class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;

        while(n >= 0){
            if(digits[n] == 9 && n != 0){
                digits[n] = 0;
            }else if (digits[n] == 9 && n == 0){
                digits[n] = 0;
                digits.push_back(1);
                reverse(digits.begin(),digits.end());
                return digits;
            }
            else{
                digits[n] += 1;
                return digits;
            }
            n--;
        }

        return digits;
    }
};