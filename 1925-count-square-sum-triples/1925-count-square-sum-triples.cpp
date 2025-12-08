class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                // for(int k=1; k<=n; k++){
                //     if((i*i)+(j*j) == (k*k)) count++;
                // }1
                int k = (i*i) + (j*j);
                int x = sqrt(k);
                if(x*x == k && x<=n) count += 2;
            }
        }
        return count;
    }
};