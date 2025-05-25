class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int l=0,h=nums.size()-1;
        int f=-1,lt=-1;

        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid] == target){
                f = mid;
                h=mid-1;
            }else if(nums[mid] < target){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        l=0,h=nums.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid] == target){
                lt = mid;
                l=mid+1;
            }else if(nums[mid] < target){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        v.push_back(f);
        v.push_back(lt);
        return v;
    }
};