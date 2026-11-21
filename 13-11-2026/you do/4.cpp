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
