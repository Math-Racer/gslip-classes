#include <iostream>
using namespace std;

int payableAmount(int bill);

int main() {
    int bill;
    cin >> bill;
    cout << payableAmount(bill) << endl;
    return 0;
}

int payableAmount(int bill) {
    if (bill >= 500) {
        int discount = 50;   // discount is in scope only inside this if block
        bill = bill - discount;
    }
    return bill;
}
