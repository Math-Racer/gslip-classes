#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double kilometers = 10;
    double miles = kilometers * 0.621371;

    cout << fixed << setprecision(2) << miles << '\n';
    return 0;
}
