#include <iostream>
using namespace std;

class busClass{
    private:
        int seat;
    public:
        void setCount(int seats){
            seat = seats;
        }
        void bookSeats(int seats){
            seat -= seats;
        }
        void displayCount(){
            cout<<seat;
        }
};

int main(){
    busClass bus1, bus2;
    int a, b;
    cout<<"Enter the available seats for Bus 1: ";
    cin>>a;
    bus1.setCount(a);
    cout<<"\nEnter the available seats for Bus 2: ";
    cin>>b;
    bus2.setCount(b);
    int c;
    cout<<"\nEnter the number of seats to book on Bus 1: ";
    cin>>c;
    bus1.bookSeats(c);
    cout<<"\nBus 1 available";
    bus1.displayCount();
    cout<<"\nBus 2 available";
    bus2.displayCount();
}