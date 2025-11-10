class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i=low; i<=high; i++){
            string str = to_string(i);
            int fq = str.length();
            bool flag = true;
            if(fq%2==0){
                int h = fq/2;
                int f = 0;
                int s = 0;
                int num = i;
                while(num){
                    int d = num%10;
                    if(flag){
                        f += d;
                        h--;
                        if(h == 0){
                            flag = false;
                        }
                    }else{
                        s += d;
                    }
                    num /= 10;
                }
                if(f == s) count++;
            }
        }
        return count;
    }
};