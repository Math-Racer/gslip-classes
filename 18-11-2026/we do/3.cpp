#include <iostream>
using namespace std;

int main(){
    int attendance1, attendance2;
    cin>>attendance1>>attendance2;
    int *p = &attendance1;
    int *q = p;
    *q += 1;
    *q = &attendance2
    cout<<*p<<*q;
}