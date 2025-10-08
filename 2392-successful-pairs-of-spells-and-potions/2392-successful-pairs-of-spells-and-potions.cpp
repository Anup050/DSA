class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        sort(potions.begin(),potions.end());
        int maxPositionValue = potions[potions.size()-1];
        for(int i=0; i<spells.size(); i++){


            long long minPositionValue = ceil((1.0*success)/spells[i]);
            if(minPositionValue > maxPositionValue){
                res.push_back(0);
                continue;
            }
            int index = lower_bound(begin(potions),end(potions), minPositionValue) - begin(potions);
            int count = potions.size()-index;
            res.push_back(count);
            // int start = 0,end = potions.size();
            // long long num = ceil((1.0*success)/spells[i]);
            // int pos = -1;
            // while(start<=end){
            //     int mid = start + (end-start)/2;
            //     if(num <= potions[mid]){
            //         pos = mid;
            //         end = mid-1;
            //     }else{
            //         start = mid+1;
            //     }
            // }
            // if(pos != -1){
            //     res.push_back(potions.size()-pos);
            // }else{
            //     res.push_back(0);
            // }
        }
        return res;
    }
};