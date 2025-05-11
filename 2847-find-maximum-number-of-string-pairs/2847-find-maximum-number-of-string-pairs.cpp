class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        int count = 0;
        int n = words.size();


        for(int i=0; i<n-1; i++){

            string rev = words[i];
            reverse(rev.begin(), rev.end());
            for(int j=i+1; j<n; j++){
                if(rev == words[j]){
                    count++;
                }
            }
        }
        return count;

        // unordered_set<string> s;

        // for(string st : words){
        //     s.insert(st);
        //     string str = reverse(st);
        //     if(s.find(str) != s.end()){
        //         count++;
        //     }
        // }

        // return count;      
        
    }
};