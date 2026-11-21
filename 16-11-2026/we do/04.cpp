
#include <iostream>
using namespace std;

double triangleArea(double base, double height){
    return base*height/2;
}

int main(){
    int base,height;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the height : ";
    cin>>height;
    cout<<triangleArea(base,height);
    return 0;
}