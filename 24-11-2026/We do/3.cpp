#include <iostream>
using namespace std;

class room{
    private:
        int length, width;
    public:
        void setDimensions(int l, int w){
            length = l;
            width = w;
        }
        int calculateArea(){
            return length*width;
        }
};

int main(){
    room hall;
    int l,w;
    cout<<"Enter the room length in metres: ";
    cin>>l;
    cout<<"\nEnter the room length in metres ";
    cin>>w;
    hall.setDimensions(l,w);
    cout<<"\nArea "<<hall.calculateArea()<<" square metres";
    return 0;
}