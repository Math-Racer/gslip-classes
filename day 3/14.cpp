#include <iostream>

using namespace std;

int main() {
    int count = 40;
    int costPrice = 18;
    int sellPrice = 25;

    int profit = count * (sellPrice - costPrice);

    cout << profit << endl; // Output: 280
    return 0;
}