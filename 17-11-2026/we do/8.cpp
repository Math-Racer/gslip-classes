#include <iostream>
using namespace std;

int previewBalance(int balance, int cost){
    balance = balance - cost;
    return balance;
}

int main(){
    int balance, purchase_cost;
    cin>>balance>>purchase_cost;
    int preview = previewBalance(balance, purchase_cost);
    cout<<balance<<" "<<preview;
}