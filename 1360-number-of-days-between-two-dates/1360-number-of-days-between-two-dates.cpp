
class Solution {
public:
    bool isLeapYear(int n) {
        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
            return true;
        }
        return false;
    }

    int calDays(int year, int months, int day) {
        vector<int> v = {31,28,31,30,31,30,31,31,30,31,30,31};
        int days = 0;

        for (int i = 1971; i < year; i++) {
            if (isLeapYear(i)) days += 366;
            else days += 365;
        }

        for (int i = 0; i < months - 1; i++) {
            days += v[i];
            if (i == 1 && isLeapYear(year)) {
                days++;
            }
        }

        days += day;
        return days;
    }

    int daysBetweenDates(string date1, string date2) {
        int yearS = stoi(date1.substr(0, 4));
        int yearE = stoi(date2.substr(0, 4));

        int monthS = stoi(date1.substr(5, 2));
        int monthE = stoi(date2.substr(5, 2));

        int dayS = stoi(date1.substr(8, 2));
        int dayE = stoi(date2.substr(8, 2));

        return abs(calDays(yearS, monthS, dayS) - calDays(yearE, monthE, dayE));
    }
};
