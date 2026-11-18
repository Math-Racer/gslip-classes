#include <iostream>
using namespace std;

int main() {
    int rate = 15;
    int minutes = 8;
    int leaked = 20;

    int water = rate * minutes - leaked;

    cout << water << endl; // Output: 100

    return 0;
}