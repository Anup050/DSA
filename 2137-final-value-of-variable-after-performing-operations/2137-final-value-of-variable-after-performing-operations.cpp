class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(int i=0; i<operations.size(); i++){
            string s = operations[i];
            if(s == "X++" || s == "++X") X++;
            else X--;
        }
        return X;
    }
};