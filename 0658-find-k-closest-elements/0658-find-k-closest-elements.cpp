class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans(k);

        if(arr[0]>x){
            for(int i=0; i<k; i++){
                ans[i] = arr[i];
            }
            return ans;
        }
        if(arr[n-1]<x){
            int i = n-1;
            int j = k-1;
            while(j>=0){
                ans[j] = arr[i];
                i--;
                j--;
            }
            return ans;
        }
        int start=0,end=n-1;
        bool flag = false;
        int t = 0;
        int mid = -1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid] == x){
                flag = true;
                ans[t] = arr[mid];
                t++;
                break;
            }else if(arr[mid] > x){
                end = mid-1;
            }else{
                 start = mid+1;
            }
        }
        int lb = end;
        int ub = start;
        if(flag == true){
            lb = mid-1;
            ub = mid+1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1 = abs(x - arr[lb]);
            int d2 = abs(x - arr[ub]);
            if(d1 <= d2){
                ans[t] = arr[lb];
                lb--;
            }else{
                ans[t] = arr[ub];
                ub++;
            }
            t++;
        }
    if(lb<0){
        while(t<k){
            ans[t] = arr[ub];
            ub++;
            t++;
        }
    }
    if(ub>n-1){
        while(t<k){
            ans[t] = arr[lb];
            lb--;
            t++;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};