#include <iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;
    int *ptr;
    ptr = &marks;
    cout<<*ptr;
    if(ptr==&marks){
        cout<<" / Same address";
    }
}