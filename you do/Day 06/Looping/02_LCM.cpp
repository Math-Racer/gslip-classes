#include <iostream>

using namespace std;

int main() {
    int a = 4;
    int b = 6;
    int candidate = a > b ? a : b;

    while (candidate % a != 0 || candidate % b != 0) {
        ++candidate;
    }

    cout << candidate << '\n';
    return 0;
}
