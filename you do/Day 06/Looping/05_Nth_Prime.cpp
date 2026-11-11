#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int count = 0;
    int candidate = 1;

    while (count < n) {
        ++candidate;
        bool prime = true;

        for (int divisor = 2; divisor * divisor <= candidate; ++divisor) {
            if (candidate % divisor == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            ++count;
        }
    }

    cout << candidate << '\n';
    return 0;
}
