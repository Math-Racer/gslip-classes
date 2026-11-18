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

void add(int a, int b){
    int c = a+b;
    cout<<c;
}

void add(int a, int b, int c){
    int d = a+b+c;
    cout<<d;
}


int main(){
    add(10, 12);
    add()
    return 0;
}