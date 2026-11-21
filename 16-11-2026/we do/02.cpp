

#include <iostream>
using namespace std;

void greet(string name){
    cout<<"Hello, "<<name;
}

int main(){
    string name;
    cout<<"Enter Your Name : ";
    getline(cin,name);
    greet(name);
    return 0;
}