class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> v = {};
        if(tomatoSlices%2!=0) return {};
        long long Y = (long long)(2 * cheeseSlices) - tomatoSlices/2;
        long long X = cheeseSlices - Y;
        if(X == (tomatoSlices/4) - Y/2 && (X>=0 && Y>=0)){
            v.push_back(X);
            v.push_back(Y);
        }
        return v;
    }
};