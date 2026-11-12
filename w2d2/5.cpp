#include <iostream>
using namespace std;

int noOfDigits(int n){
    int count = 0;
    while (n>0){
        n = n/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    int rounds = 0;
    int product;
    while(noOfDigits(n)!=1){
        int sum =0;
        for(int i = 0;i<noOfDigits(n);i++){
            sum += n%10;
            n = n/10;
            
        }
        rounds++;
        n=sum;
    }
    cout<<rounds<<endl;
    cout<<n;
}