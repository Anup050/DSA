class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {

        //O(nlogn)(time) : O(1)(space)

        // int count = 0;
        // sort(begin(seats), end(seats));
        // sort(begin(students), end(students));
        // for(int i=0; i<seats.size(); i++){
        //     count += abs(seats[i]-students[i]);
        // }
        // return count;

        //counting sort : O(n)(time) : o(1)(space)

        int moves = 0;
        vector<int> pS(101,0);
        vector<int> pSt(101,0);
        for(int &i : seats) pS[i]++;
        for(int &i : students) pSt[i]++;

        int n = seats.size();
        int i=0,j=0;
        while(n){
            if(pS[i] == 0) i++;
            if(pSt[j] == 0) j++;

            if(pS[i] != 0 && pSt[j] != 0){
                moves += abs(i-j);
                pS[i]--;
                pSt[j]--;
                n--;
            }
        }
        return moves;
    }
};