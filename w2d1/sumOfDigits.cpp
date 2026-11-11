#include <iostream>
using namespace std;

int main() {
    long long number;
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    long long sum = 0;
    do {
        sum += number % 10;
        number /= 10;
    } while (number != 0);

    cout << sum << endl;
    return 0;
}
