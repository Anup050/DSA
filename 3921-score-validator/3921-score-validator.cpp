class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter = 0,score = 0;
        for(string i : events){
            if(i == "0" || i == "1" || i == "2" || i == "3" || i == "4" || i == "6"){
                score += stoi(i);
            }else if (i == "W") counter++;
            else score++;
            if(counter == 10) break;
        }
        return {score, counter};
    }
};