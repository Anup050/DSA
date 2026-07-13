class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int H = ((endTime[0] - '0')*10 + (endTime[1] - '0')) - ((startTime[0] - '0')*10 + (startTime[1] - '0'));
        int M = ((endTime[3] - '0')*10 + (endTime[4] - '0')) - ((startTime[3] - '0')*10 + (startTime[4] - '0'));
        int S = ((endTime[6] - '0')*10 + (endTime[7] - '0')) - ((startTime[6] - '0')*10 + (startTime[7] - '0'));
        if(M < 0){
             M += 60;
             H--;
        }
        if(S < 0){
             S += 60;
             M--;
        }
        return (H*60*60)+(M*60)+S;
    }
};