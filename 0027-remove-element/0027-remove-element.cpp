class Solution {
public:
    int removeElement(vector<int>& v, int a) {
        // int j = v.size()-1;
        // if(v.size() == 1){
        //     if(v[0] == a)
        //         return 0;
        //     else
        //         return 1;
        // }
        // while(j>0){
        //     v.erase(remove(v.begin(), v.end(), a), v.end());
        //     j--;
        // }
        // return v.size();

        int index = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != a) {
                v[index] = v[i];
                index++;
            }
        }
        return index;
    }
};