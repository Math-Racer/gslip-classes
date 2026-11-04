#include <iostream>
using namespace std;

int main() {
    int total = 135;

    int hours = total / 60;

    int minutes = total % 60;

    cout << hours << endl;   // Output: 2
    cout << minutes << endl; // Output: 15
    return 0;
}