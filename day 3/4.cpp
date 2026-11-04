#include <iostream>

using namespace std;

int main() {
    int chocolates = 50;
    int children = 7;

    int each = chocolates / children;
    int left = chocolates % children;

    cout << each << endl; // Output: 7
    cout << left << endl; // Output: 1

    return 0;
}