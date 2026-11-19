#include <iostream>
using namespace std;



int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    int rounds = 0;
    
    while(n>10){
        int temp;
        int product =1;
        while(n!=0){
            temp = n%10;
            n = n/10;
            product*=temp;
        }
        rounds++;
        n=product;
        cout<<product<<" ";
    }
    cout<<endl;
    cout<<rounds<<endl;
    cout<<n;
}