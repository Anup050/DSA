class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(), citations.end());
        int i=1;
        int h = 0;
        while(i<=n){
            if(citations[n-i]>=i){
                h = i;
            }
            i++;
        }
        return h;
    }
};