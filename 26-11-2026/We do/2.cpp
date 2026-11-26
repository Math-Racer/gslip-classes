#include <iostream>
#include <iomanip>
using namespace std;

class BoardCalculator{
    public:
        void area(int side){
            double area = side*side;
            cout<<"Area: "<<fixed<<setprecision(2)<<area<<" square metres";
        }
        void area(double length, double width){
            double area = length *width;
            cout<<"Area: "<<fixed<<setprecision(2)<<area<<" square metres";
        }
};

int main(){
    int choice;
    BoardCalculator shape;
    cout<<"1. Square\n2. Rectangle\nEnter choice: ";
    cin>>choice;
    if (choice==1){
        int side;
        cout<<"\nEnter side: ";
        cin>>side;
        shape.area(side);
    }
    else if(choice ==2){
        double l, w;
        cout<<"\nEnter length: ";
        cin>>l;
        cout<<"\nEnter width: ";
        cin>>w;
        shape.area(l, w);
    }
}