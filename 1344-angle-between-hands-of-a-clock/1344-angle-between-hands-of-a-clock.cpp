class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hAngle = (30*hour) + (0.5*minutes);
        double mAngle = minutes * 6;
        double f = abs(hAngle-mAngle);
        double s = abs(360-f);
        return min(f,s);
    }
};