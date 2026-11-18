#include <iostream>
using namespace std;

int hallCapacity = 30;

int remainingSeats(int occpuied);

int main(){
    int occupied;
    cout<<"Enter occupied seats: ";
    cin>>occupied;
    cout<<hallCapacity;
    remainingSeats(occupied);
}

int remainingSeats(int occupied){
    cout<<" / "<<hallCapacity - occupied;
    return 0;
}