#include <iostream>
using namespace std;

void printDemo(){
    int count;
    count = 3;
    cout<<count;
}

int main(){
    int count;
    cout<<"Enter count: ";
    cin>>count;

    printDemo();
    cout<<" / "<<count;

}