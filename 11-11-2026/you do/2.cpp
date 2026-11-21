#include <iostream>
using namespace std;

int main() {
    int balance = 85;
    int limit = 20;
    int visits = 0;
    while (balance > 0) {
        int pay;
        if (balance < limit) {
            pay = balance;
        } else {
            pay = limit;
        }
        balance = balance - pay;
        cout << pay << endl;
        visits++;
    }
    cout << "Visits = " << visits << endl;
    return 0;
}
