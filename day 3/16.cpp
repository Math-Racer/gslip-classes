#include <iostream>
using namespace std;

int main() {
    int adults = 3;
    int adultFare = 450;
    int children = 2;
    int childFare = 225;

    int total = adults * adultFare + children * childFare;

    cout << total << endl; // Output: 1800
    return 0;
}