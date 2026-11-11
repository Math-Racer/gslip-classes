#include <iostream>

using namespace std;

int main() {
    int base = 3;
    int exponent = 4;
    long long result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    cout << result << '\n';
    return 0;
}
