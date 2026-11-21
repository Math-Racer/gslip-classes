

#include <iostream>
using namespace std;

int countEvenTickets(int n){
    int count =0;
    for(int i=1 ; i<n; i++){
        if(i%2==0){
            count++;
        }
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter the Num : ";
    cin>>num;
    cout<<countEvenTickets(num);
    return 0;
}
