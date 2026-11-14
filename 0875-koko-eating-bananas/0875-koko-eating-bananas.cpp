class Solution {
public:
    bool canEat(vector<int> &piles, int h, int k){
        long long hours = 0;
        for(int i : piles){
            hours += ((i+k-1)/k);
        }
        return (hours <= h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = *max_element(begin(piles), end(piles));
        int s = 1, e = ans; 
        while(s<=e){
            int mid = s + (e-s)/2;
            if(canEat(piles, h, mid)){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return ans;
    }
};