#include <iostream>
using namespace std;

void printBadges(int n);

int main() {
    int n;
    cin >> n;
    printBadges(n);
    return 0;
}

void printBadges(int n) {
    if (n == 0) {            // base case
        return;
    }
    printBadges(n - 1);      // recursive call
    cout << n << endl;
}
