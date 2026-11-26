#include <iostream>
using namespace std;

class Vehicle{
    protected:
        int id;
    public:
        Vehicle(int a){
            id = a;
        }
};

class Bus : public Vehicle{
    private:
        int seat;
    public:
        Bus(int a, int b) : Vehicle(a){
            seat = b;
        }
        void display(){
            cout<<"Bus "<<id<<": "<<seat<<" seats";
        }
};

class Van: public Vehicle{
    private:
        int payload;
    public:
        Van(int a, int b) : Vehicle(a){
            payload = b;
        }
};

int main(){
    int a, b, c, d;
    cout<<"Enter the bus ID: ";
    cin>>a;
    cout<<"Eter the seat count: ";
    cin>>b;
    cout<<"Enter the van ID: ";
    cin>>c;
    cout<<"Enter the payload in kg: ";
    cin>>d;
    Bus bus(a, b);
    bus.display();

}