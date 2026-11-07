#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n>0){
        n += 1;
        cout<<"The number is incremented: "<<n;
    }
    else if (n<0){
        cout<<"The number is not incremented: "<<n;
    }
}