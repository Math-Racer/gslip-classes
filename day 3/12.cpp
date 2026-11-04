#include <iostream>

using namespace std;

int main() {
    int eggs = 275;
    int tray = 30;

    int fullTrays = eggs / tray;
    int left = eggs % tray;

    cout << fullTrays << endl; // Output: 9
    cout << left << endl; // Output: 5

    return 0;
}