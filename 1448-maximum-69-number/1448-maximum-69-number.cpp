class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        vector<int> v;

        while(temp>0){
            int n = temp%10;
            v.push_back(n);
            temp /= 10;
        }
        reverse(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i] == 6){
                v[i] = 9;
                break;
            }
        }
        int nums = 0;
        for(int i : v){
            nums = (nums*10) + i;
        }
        return max(nums,num);
    }
};