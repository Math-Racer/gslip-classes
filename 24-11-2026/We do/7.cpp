#include <iostream>
using namespace std;

class AttendanceCounter {
    int count;
public:
    AttendanceCounter() {
        count = 0;
    }
    void arrival() {
        count++;
    }
    void display() {
        cout << count << endl;
    }
};

int main() {
    AttendanceCounter a;
    int n;
    cout << "Before ";
    a.display();
    cout << "Enter the number of arrivals: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        a.arrival();
    }
    cout << "After ";
    a.display();
    return 0;
}
