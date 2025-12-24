class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int tA = accumulate(begin(apple), end(apple), 0);
        sort(begin(capacity), end(capacity));
        int count = 0;
        int cS = 0;
        for(int i=capacity.size()-1; i>=0; i--){
            cS += capacity[i];
            count++;
            if(cS>=tA) break;
        }
        return count;
    }
};