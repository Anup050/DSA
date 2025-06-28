class Solution {
public:
    int maxArea(vector<int>& h) {
        int mx = 0;
        //TLE O(n^2):
        // for(int i=0; i<h.size(); i++){
        //     for(int j=1; j<h.size(); j++){
        //         int ar = min(h[i],h[j])* (j-i);
        //         mx = max(mx, ar);
        //     }
        // }
        int i=0,j=h.size()-1;
        while(j>i){
            int ar = min(h[i],h[j]) * (j-i);
            mx = max(mx,ar);
            if(h[i] > h[j]){
                j--;
            }else{
                i++;
            }
        }
        return mx;
    }
};