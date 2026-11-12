#include <iostream>
using namespace std;

int main(){
    int tickets[5] = {10,15,20,30};
    int pos = 1;
    int used = 4;

    for (int i = pos; i < used; i++){
        tickets[i] = tickets[i+1];

    }
    used--;
    
    for (int i=0;i<used;i++){
        cout<<tickets[i]<<" ";
    }    
    cout<<"The used space is "<<used;
}