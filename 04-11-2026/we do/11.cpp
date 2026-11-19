#include <iostream>
using namespace std;

int main() {
    int fixed = 50;
    int rate = 12;
    int km = 15;

    int fare = fixed + rate * km;

    cout << fare << endl; // Output: 230
    return 0;
}