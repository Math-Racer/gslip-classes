#include <iostream>
#include <string>
using namespace std;

class RechargePlan {
    string name;
    int price, validity;
public:
    RechargePlan(string n, int p, int v) {
        name = n;
        price = p;
        validity = v;
    }
    void display() {
        cout << name << " Rs " << price << " " << validity << " days" << endl;
    }
};

int main() {
    string n1, n2;
    int p1, v1, p2, v2;
    cout << "Enter the name of Plan 1: ";
    cin >> n1;
    cout << "Enter the price in rupees for Plan 1: ";
    cin >> p1;
    cout << "Enter the validity in days for Plan 1: ";
    cin >> v1;
    cout << "Enter the name of Plan 2: ";
    cin >> n2;
    cout << "Enter the price in rupees for Plan 2: ";
    cin >> p2;
    cout << "Enter the validity in days for Plan 2: ";
    cin >> v2;
    RechargePlan r1(n1, p1, v1);
    RechargePlan r2(n2, p2, v2);
    r1.display();
    r2.display();
    return 0;
}
