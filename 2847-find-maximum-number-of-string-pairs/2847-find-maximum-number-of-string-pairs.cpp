class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        int count = 0;
        int n = words.size();


        // for(int i=0; i<n-1; i++){

        //     string rev = words[i];
        //     reverse(rev.begin(), rev.end());
        //     for(int j=i+1; j<n; j++){
        //         if(rev == words[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        unordered_set<string> s;

        // for(string st : words){
        //     s.insert(st);
        //     string str = st;
        //     reverse(str.begin(),str.end());
        //     if(st == str) continue;
        //     if(s.find(str) != s.end()){
        //         s.erase(str);
        //         count++;
        //     }
        // }

        for(int i=0; i<n; i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev) != s.end()){
                count++;
            }else{
                s.insert(words[i]);
            }
        }

        return count;      
        
    }
};