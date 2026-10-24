class Solution {
public:
    int count(int M){
        int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days = 0;
        for(int i=0; i<M-1; i++){
            days += arr[i];
        }
        return days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aAM = stoi(arriveAlice.substr(0,2));
        int aAD = stoi(arriveAlice.substr(3,5));
        int aLM = stoi(leaveAlice.substr(0,2));
        int aLD = stoi(leaveAlice.substr(3,5));
        int bAM = stoi(arriveBob.substr(0,2));
        int bAD = stoi(arriveBob.substr(3,5));
        int bLM = stoi(leaveBob.substr(0,2));
        int bLD = stoi(leaveBob.substr(3,5));
        int asD = count(aAM) + aAD;
        int alD = count(aLM) + aLD;
        int bsD = count(bAM) + bAD;
        int blD = count(bLM) + bLD;
        int s = max(asD,bsD);
        int e = min(alD,blD);
        return ((e-s+1) > 0) ? e-s+1 : 0;
    }
};