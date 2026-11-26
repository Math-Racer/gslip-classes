#include <iostream>
using namespace std;

class LabInventory {
    int stock;
public:
    LabInventory(int s) {
        stock = s;
    }
    void issueKits(int q) {
        if (q > 0 && q <= stock) {
            stock = stock - q;
            cout << "Accepted ";
        } else {
            cout << "Rejected ";
        }
        display();
    }
    void display() {
        cout << stock << endl;
    }
};

int main() {
    LabInventory lab(20);
    int n, q;
    cout << "Enter the number of requests: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter the number of kits for request " << i << ": ";
        cin >> q;
        lab.issueKits(q);
    }
    return 0;
}
