

#include <iostream>
using namespace std;

int readChoice(){
    int choice;
    
    while(true){
        cout<<"Enter the choice 1 or 2 : ";
        cin>>choice;
        if(choice == 1 or choice == 2){
            break;
        }else{
            continue;
        }
        
    }
    return choice;
}

int main(){
    cout<<readChoice();
    return 0;
}