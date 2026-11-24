#include <iostream>
using namespace std;

class EventBooking{
    private:
        int seat = 30;
    public:
        void book(int seats){
            if(seats>seat){
                cout<<"Rejected "<<seat;
            }
            else{
                seat = seat - seats;
                cout<<"Accepted "<<seat;
            }
        }
};

int main(){
    EventBooking eventbooking;
    int n;
    cout<<"Enter the number of requests: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        int j;
        printf("\nEnter the number of seats for request %d: ",i);
        cin>>j;
        eventbooking.book(j);
    }

}