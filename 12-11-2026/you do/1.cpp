#include <iostream>
using namespace std;

int main() {
    int deliveries[6];

    cout << "Enter delivery counts: ";
    for (int i = 0; i < 6; i++) {
        cin >> deliveries[i];
    }

    cout << "First count: " << deliveries[0] << endl;
    cout << "Last count: " << deliveries[5] << endl;

    cout << "Reverse order: ";
    for (int i = 5; i >= 0; i--) {
        cout << deliveries[i] << " ";
    }

    return 0;
}
