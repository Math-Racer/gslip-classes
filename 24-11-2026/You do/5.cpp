

#include <iostream>
using namespace std;

class CouponWallet {
private:
    int balance;

public:
    CouponWallet(int b) {
        balance = b;
    }

    bool redeem(int request) {
        if (request > 0 && request <= balance) {
            balance = balance - request;
            return true;
        }
        return false;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    int b1, b2;

    cout << "Enter the opening balance for Wallet 1: ";
    cin >> b1;
    cout << "Enter the opening balance for Wallet 2: ";
    cin >> b2;

    CouponWallet w1(b1);
    CouponWallet w2(b2);

    int count, request;

    cout << "Enter the request count for Wallet 1: ";
    cin >> count;
    for (int i = 1; i <= count; i++) {
        cout << "Enter coupons for Wallet 1, request " << i << ": ";
        cin >> request;
        if (w1.redeem(request)) {
            cout << "Accepted";
        } else {
            cout << "Rejected";
        }
        cout << " | Wallet 1 balance: " << w1.getBalance() << endl;
    }

    cout << "Enter the request count for Wallet 2: ";
    cin >> count;
    for (int i = 1; i <= count; i++) {
        cout << "Enter coupons for Wallet 2, request " << i << ": ";
        cin >> request;
        if (w2.redeem(request)) {
            cout << "Accepted";
        } else {
            cout << "Rejected";
        }
        cout << " | Wallet 2 balance: " << w2.getBalance() << endl;
    }

    return 0;
}
