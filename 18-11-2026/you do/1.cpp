/*
Q1: Read a parcel weight
Algorithm:
1. Read weight (0-100) into an int variable.
2. Create an int pointer and store the address of weight in it.
3. Dereference the pointer and print the value.
*/
#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    int* ptr = &weight;
    cout << *ptr << endl;

    return 0;
}
