class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> res;
        vector<bool> v(100,false);
        for(int i : bulbs){
            if(v[i-1]) v[i-1] = false;
            else v[i-1] = true;
        }
        for(int i=0; i<100; i++){
            if(v[i]) res.push_back(i+1);
        }
        return res;
    }
};