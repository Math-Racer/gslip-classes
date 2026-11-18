#include <iostream>
using namespace std;

void printOrder(int items);

int main(){
    int items;
    cout<<"Enter items: ";
    cin>>items;

    printOrder(items);
    cout<<items;

}

void printOrder(int items){
    if(items > 10){
        int extraBoxes = 1;
        cout<<extraBoxes<<" / ";
    }
}