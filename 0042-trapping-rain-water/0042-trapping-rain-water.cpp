class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        vector<int> pr(n);
        vector<int> rr(n);
        pr[0]=h[0];
        rr[n-1]=h[n-1];
        for(int i=1;i<n;i++){
            pr[i]=max(pr[i-1],h[i]);
        }
        for(int i=n-2;i>=0;i--){
            rr[i]=max(rr[i+1],h[i]);
        }
        int water=0;
        for(int i=0;i<n;i++){
            int ans=min(pr[i],rr[i]);
            if(ans-h[i]>0) water+=ans-h[i];
        }
        return water;
    }
};