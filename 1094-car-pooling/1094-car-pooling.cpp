class Solution {
public:
    typedef pair<int,int> P;
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(begin(trips), end(trips),[](vector<int> a, vector<int> b){
            return a[1] < b[1];
        });
        int p = trips[0][0];
        if(p>capacity) return false;
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({trips[0][2],trips[0][0]});
        for(int i=1; i<trips.size(); i++){
            while(pq.size()>0 and pq.top().first<=trips[i][1]){
                p -= pq.top().second;
                pq.pop();
            }
            if(p+trips[i][0]<=capacity){
                p+=trips[i][0];
                pq.push({trips[i][2],trips[i][0]});
            }
            else return false;

        }
        return true;
    }
};