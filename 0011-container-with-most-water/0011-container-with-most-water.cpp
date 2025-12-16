class Solution {
public:
    int maxArea(vector<int>& h) {
        int mx = 0;
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