#include <iostream>
using namespace std;

int main() {
    int tickets, sold;
    cin >> tickets >> sold;
    int *p = &tickets;
    *p = *p - sold;
    cout << tickets << endl;
    return 0;
}
