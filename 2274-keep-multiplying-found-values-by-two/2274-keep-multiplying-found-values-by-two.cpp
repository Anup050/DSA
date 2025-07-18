class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        while(1){
            if(s.find(original) != s.end()){
                original *= 2;
            }else{
                break;
            }
        }
        return original;
    }
};