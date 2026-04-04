class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        int n = candyType.size();
        for(int i : candyType) s.insert(i);
        return (s.size() >= n / 2) ? n/2 : s.size();
    }
};