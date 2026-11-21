#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;
    int *p = &weight;
    cout << *p << endl;
    return 0;
}
