class Solution {
public:
    int reverseN(int num){
        int n = 0;
        while(num){
            n = (n*10) + (num%10);
            num /= 10;
        }
        return n;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int minP = INT_MAX;
        unordered_map<int,int> mp;
        mp[reverseN(nums[0])] = 0;
        for(int i=1; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                minP = min(minP, abs(mp[nums[i]]-i));
            }
            mp[reverseN(nums[i])] = i;
        }
        return (minP == INT_MAX) ? -1 : minP;
    }
};