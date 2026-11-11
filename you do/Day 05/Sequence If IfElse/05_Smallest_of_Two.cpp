#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    if (a == b) {
        cout << "Equal: " << a;
    } else {
        cout << "Smallest = " << (a < b ? a : b);
    }

    cout << '\n';
    return 0;
}
