/*
Q4: Add returned books through a pointer
Algorithm:
1. In main, read the shelf count and the number of returns.
2. Call addReturns(&count, returned), passing the count's address.
3. In addReturns, add 'returned' to the value at the pointer (*count += returned).
4. Back in main, print the updated count.
*/
#include <iostream>
using namespace std;

void addReturns(int* count, int returned);

int main() {
    int count, returned;
    cin >> count >> returned;

    addReturns(&count, returned);

    cout << count << endl;

    return 0;
}

void addReturns(int* count, int returned) {
    *count = *count + returned;
}
