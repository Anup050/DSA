class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n, 0);
        for(auto &i : bookings){
            int x = i[0];
            int y = i[1];
            int z = i[2];
            v[x-1] += z;
            if(y<n) v[y] -= z;
        }
        for(int i=1; i<n; i++){
            v[i] += v[i-1];
        }
        return v;
    }
};