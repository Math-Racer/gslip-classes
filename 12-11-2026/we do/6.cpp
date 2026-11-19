#include <iostream>
using namespace std;

int main(){
    int registerationTickets[5] = {10,20,30};
    int used = 3;
    int pos = 1;

    for (int i=used; i>pos; i--){
        registerationTickets[i]= registerationTickets[i-1];
    }

    registerationTickets[pos] = 15;
    used++;

    for (int i=0;i<used;i++){
        cout<<registerationTickets[i]<<" ";
    }
    cout<<"The used space is "<<used;
}