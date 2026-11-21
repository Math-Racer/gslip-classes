#include <iostream>
using namespace std;

int main() {
    int limit = 10;
    int matches = 0;
    for (int i = 2; i <= limit; i++) {
        int divisors = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors++;
            }
        }
        if (divisors == 3) {
            cout << i << endl;
            matches++;
        }
    }
    cout << "Matches = " << matches << endl;
    return 0;
}
