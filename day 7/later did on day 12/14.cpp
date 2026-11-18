#include <iostream>
using namespace std;

int main() {
    int upperLimit;
    cin >> upperLimit;

    int primeCount = 0;

    for (int card = 2; card <= upperLimit; card++) {

        bool isPrime = true;

        for (int divisor = 2; divisor <= card / 2; divisor++) {
            if (card % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeCount++;
        }
    }

    cout << "Prime cards = " << primeCount << endl;
    return 0;
}