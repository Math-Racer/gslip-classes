#include <iostream>
using namespace std;

class ParkingLot {
    int capacity, occupied;
public:
    ParkingLot() {
        capacity = 20;
        occupied = 0;
    }
    ParkingLot(int c) {
        capacity = c;
        occupied = 0;
    }
    void display() {
        cout << "capacity " << capacity << ", occupied " << occupied << endl;
    }
};

int main() {
    int c;
    cout << "Enter the custom parking capacity: ";
    cin >> c;
    ParkingLot p1;
    ParkingLot p2(c);
    cout << "Standard ";
    p1.display();
    cout << "Custom ";
    p2.display();
    return 0;
}
