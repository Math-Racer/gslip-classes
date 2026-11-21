#include <iostream>
using namespace std;

int main() {
    int limit = 25;
    int count = 0;
    for (int i = 1; i <= limit; i++) {
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit == 2) {
                count++;
            }
            temp = temp / 10;
        }
    }
    cout << "Digit 2 appearances = " << count << endl;
    return 0;
}
