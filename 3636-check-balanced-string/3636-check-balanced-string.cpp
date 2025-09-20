class Solution {
public:
    bool isBalanced(string num) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<num.length(); i++){
            if(i%2==0){
                stringstream s;
                s << num[i];
                int n = 0;
                s >> n;
                sum1 += n;
            }else{
                stringstream s;
                s << num[i];
                int n = 0;
                s >> n;
                sum2 += n;
            }
        }
        return sum1 == sum2;
    }
};