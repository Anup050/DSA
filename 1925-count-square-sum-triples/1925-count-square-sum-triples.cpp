class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                //O(n^3) 
                // for(int k=1; k<=n; k++){
                //     if((i*i)+(j*j) == (k*k)) count++;
                // } 
                //O(n^2logn)
                int k = (i*i) + (j*j);
                int x = sqrt(k);
                if(x*x == k && x<=n) count += 2;
            }
        }
        return count;
    }
};