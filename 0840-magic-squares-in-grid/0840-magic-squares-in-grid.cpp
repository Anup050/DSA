class Solution {
public:
    bool isMagic(vector<vector<int>>&grid,int rS, int rE, int cS, int cE){

        vector<int> freq(10,0);
        for(int i=rS;i<rE;i++){
            for(int j=cS;j<cE;j++){
                if(grid[i][j]<1 || grid[i][j]>9) return false;
                freq[grid[i][j]]++;
            }
        }
        for(int i=1;i<=9;i++){
            if(freq[i]!=1) return false;
        }

        int sum = 0;
        bool temp = true;

        for(int i=rS; i<rE; i++){
            int s = 0;
            for(int j=cS; j<cE; j++){
                s += grid[i][j];
            }
            if(temp){
                sum = s;
                temp = false;
            }else{
                if(s != sum) return false;
            }
        }

        for(int j=cS; j<cE; j++){
            int s = 0;
            for(int i=rS; i<rE; i++){
                s += grid[i][j];
            }
            if(s != sum) return false;
        }

        int i=rS,j=cS;
        int dS1 = 0;
        while(i<rE){
            dS1 += grid[i][j];
            i++; j++;
        }
        if(sum != dS1) return false;

        int k=rS,l=cE-1;
        int dS2 = 0;
        while(k<rE){
            dS2 += grid[k][l];
            k++; l--;
        }
        if(sum != dS2) return false;

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(m < 3 || n < 3) return 0;

        int count = 0;
        int i=0;
        while(i+2<m){
            int j=0;
            while(j+2<n){
                if(isMagic(grid,i,i+3,j,j+3)) count++;
                j++;
            }
            i++;
        }
        return count;
    }
};
