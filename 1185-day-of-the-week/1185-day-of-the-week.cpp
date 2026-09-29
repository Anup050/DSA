class Solution {
public:
    bool leap(int y) {
        return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
    }
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> days = {"Sunday","Monday","Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
        vector<int>monthDays {
            31,28,31,30,31,30,
            31,31,30,31,30,31
        };

        int total = 0;

        for (int y = 1971; y < year; y++)
            total += leap(y) ? 366 : 365;

        for (int m = 1; m < month; m++) {
            total += monthDays[m - 1];
            if (m == 2 && leap(year)) total++;
        }

        total += day;

        return days[(total + 4) % 7];
    }
};