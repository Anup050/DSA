class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count = 0;
        int n = candyType.size();
        unordered_set<int> s;
        for(int i : candyType){
            s.insert(i);
        }
        int  m = s.size();
        return (m<n/2) ? m : n/2;
    }
};