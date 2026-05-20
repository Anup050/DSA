class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        // vector<int> v;
        // unordered_set<int> s;
        // int count = 0;
        // for(int i=0; i<A.size(); i++){
        //     if(s.find(A[i]) != s.end()) count++;
        //     if(s.find(B[i]) != s.end()) count++;
        //     if(A[i] == B[i]) count++;
        //     s.insert(A[i]);
        //     s.insert(B[i]);
        //     v.push_back(count);
        // }
        // return v;
        int n = A.size();
        vector<int> freq(n + 1, 0);
        vector<int> res;
        int common = 0;

        for (int i = 0; i < n; i++) {
            if (++freq[A[i]] == 2) common++;
            if (++freq[B[i]] == 2) common++;

            res.push_back(common);
        }
        return res;
    }
};