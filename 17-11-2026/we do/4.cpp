#include <iostream>
using namespace std;

void showSeats(int seats);

int main(){
    int rowSeats;
    cout<<"Enter Row Seats: ";
    cin>>rowSeats;

    showSeats(rowSeats);

}

void showSeats(int seats){
    cout<<seats;
}