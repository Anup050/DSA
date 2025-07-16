class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> mp;
        unordered_set<int> s;

        for(int ele : arr){
            mp[ele]++;
        }

        for(auto i : mp){
            int fq = i.second;
            if(s.find(fq) != s.end()){
                return false;
            }else{
                s.insert(fq);
            }
            
        }
        return true;
    }
};