class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len = 0;
        unordered_set<int> s;
        for(int i : nums) s.insert(i);
        for(auto i : s){
            if(s.find(i-1) == s.end()){
                int x = i+1;
                while(s.find(x) != s.end()){
                    x++;
                }
                len = max(len, x-i);
            }
        }
        return len;
    }
};