class Solution {
public:
    int search(vector<int>& arr, int k) {
        // for(int i=0; i<arr.size(); i++){
        //     if(arr[i] == k){
        //         return i;
        //     }
        // }
        int start = 0, end = arr.size()-1;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(arr[mid] == k){
                return mid;
            }else if(arr[start] <= arr[mid]){
                if((arr[start] <= k) && (k < arr[mid])){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }else{
                if((arr[mid] < k) && (arr[end] >= k)){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};