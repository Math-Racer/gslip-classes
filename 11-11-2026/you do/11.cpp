#include <iostream>
using namespace std;

int main() {
    int tag = 6083;
    int count = 0;
    do {
        int digit = tag % 10;
        if (digit % 2 == 0) {
            count++;
        }
        tag = tag / 10;
    } while (tag > 0);
    cout << "Even digits = " << count << endl;
    return 0;
}
