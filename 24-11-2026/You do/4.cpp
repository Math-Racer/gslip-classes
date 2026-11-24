#include <iostream>
#include <iomanip>
using namespace std;

class MeetingClock {
private:
    int hour;
    int minute;

public:
    MeetingClock() {
        hour = 0;
        minute = 0;
    }

    MeetingClock(int h, int m) {
        hour = h;
        minute = m;
    }

    void addMinute() {
        minute++;
        if (minute == 60) {
            minute = 0;
            hour++;
        }
        if (hour == 24) {
            hour = 0;
        }
    }

    void display() {
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << endl;
    }
};

int main() {
    int h, m;

    cout << "Enter the custom clock hour: ";
    cin >> h;
    cout << "Enter the custom clock minute: ";
    cin >> m;

    MeetingClock defaultClock;
    MeetingClock customClock(h, m);

    defaultClock.addMinute();
    customClock.addMinute();

    cout << "Default clock: ";
    defaultClock.display();
    cout << "Custom clock: ";
    customClock.display();

    return 0;
}
