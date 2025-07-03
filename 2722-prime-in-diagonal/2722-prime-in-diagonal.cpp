class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int prime = 0;
        int n = nums.size();
        vector<int> v;
        int i=0,j=0;
        while(i<n){
            v.push_back(nums[i][j]);
            i++;
            j++;
        }
        i=0,j=n-1;
        while(i<n){
            v.push_back(nums[i][j]);
            i++;
            j--;
        }
        
        for(int i=0; i<v.size(); i++){
            int p = v[i];
            bool pr = true;
            if (p < 2) continue;
            for(int j = 2; j*j <= p; j++){
                if(p%j == 0){
                    pr = false;
                }
            }
            if(pr == true){
                prime = max(prime,v[i]);
            }
        }
        return prime;
    }
};