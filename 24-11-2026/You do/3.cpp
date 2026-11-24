
#include <iostream>
#include <iomanip>
using namespace std;

class PrinterTray {
private:
    int capacity;
    int current;

    double getPercentage() {
        return (current * 100.0) / capacity;
    }

public:
    PrinterTray() {
        capacity = 200;
        current = 0;
    }

    void setCount(int c) {
        current = c;
    }

    void display() {
        double percent = getPercentage();
        cout << "Paper remaining: " << fixed << setprecision(2) << percent << "%" << endl;
        if (percent < 20) {
            cout << "Paper low" << endl;
        }
    }
};

int main() {
    PrinterTray tray;
    int checks, count;

    cout << "Enter the number of checks: ";
    cin >> checks;

    for (int i = 1; i <= checks; i++) {
        cout << "Enter the sheet count for check " << i << ": ";
        cin >> count;
        tray.setCount(count);
        tray.display();
    }

    return 0;
}
