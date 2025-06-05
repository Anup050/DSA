class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> v;
        int m = arr.size();
        int n = arr[0].size();
        int minr = 0;
        int maxr = m-1;
        int minc = 0;
        int maxc = n-1;

        while(minr <= maxr && minc <= maxc){

            for(int j=minc; j<=maxc; j++){
                int val = arr[minr][j];
                v.push_back(val);
                
            }
            minr++;
            if(minr>maxr || minc>maxc) break;

            for(int i=minr; i<=maxr; i++){
                int val = arr[i][maxc];
                v.push_back(val);
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;

            for(int j=maxc; j>=minc; j--){
                int val = arr[maxr][j];
                v.push_back(val);
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;

            for(int i=maxr; i>=minr; i--){
                int val = arr[i][minc];
                v.push_back(val);
            }
            minc++;
            if(minr>maxr || minc>maxc) break;
        }
        return v;
    }
};