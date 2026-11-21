#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string full_name;
    cout<<"Enter you Full Name (getline) : ";
    getline(cin,full_name);

    string name;
    cout<<"Enter you Name (cin) : ";
    cin>>name;
   
    cout<<full_name<<endl;
    cout<<name<<endl;
    
    return 0;
}