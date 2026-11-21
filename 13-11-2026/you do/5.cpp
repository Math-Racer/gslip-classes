#include <iostream>
using namespace std;

int main() {
    int minutes[5];
    int target;
    for (int i = 0; i < 5; i++) {
        cin >> minutes[i];
    }
    cin >> target;

    int *p = minutes;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (*p >= target) {
            count++;
        }
        p++;
    }
    cout << count << endl;
    return 0;
}
