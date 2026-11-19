#include <iostream>
using namespace std;

void showAmounts(int amount){
    if (amount>0){
        int inner_amount = 2;
        cout<<inner_amount<<" / ";
    }
}

int main(){
    int count;
    cin>>count;
    showAmounts(count);
    cout<<count;
}