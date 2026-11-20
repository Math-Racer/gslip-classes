/*
Q2: Update a ticket count
Algorithm:
1. Read the initial ticket count and the number sold.
2. Point an int pointer to the ticket count variable.
3. Subtract the number sold through the pointer (*ptr -= sold).
4. Print the remaining tickets using the pointer.
*/
#include <iostream>
using namespace std;

int main() {
    int count, sold;
    cin >> count >> sold;

    int* ptr = &count;
    *ptr = *ptr - sold;

    cout << *ptr << endl;

    return 0;
}
