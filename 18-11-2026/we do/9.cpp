#include <iostream>
using namespace std;

int main(){
    int rack[6] = {0,1,2,3,4};
    int *p, *q;
    int a, b;
    cin>>a>>b;
    p = &rack[a];
    q = &rack[b];
    // cout<<*q-*p;
    cout<<q-p;
}