#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    int rounds = 0;
    
    while(n>10){
        
        int product =1;
        string n_string = to_string(n);
        int temp = n_string.length();
        for(int i = 0; i<temp; i++){
            product *= n_string[i] - '0';
        }
        rounds++;
        n=product;
        cout<<product<<" ";
    }
    cout<<endl;
    cout<<rounds<<endl;
    cout<<n;
}