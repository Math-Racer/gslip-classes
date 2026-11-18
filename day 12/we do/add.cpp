#include <iostream>
using namespace std;

void add(){
    int a, b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;

    int c = a+b;
    cout<<c;
}

int main(){
    add();
    return 0;
}