#include <iostream>
using namespace std;

int main() {
    int length = 12;
    int width = 9;

    int area = length * width;

    int perimeter = 2 * (length + width);

    cout << area << endl;      // Output: 108
    cout << perimeter << endl; // Output: 42
    return 0;
}