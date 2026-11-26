#include <iostream>
using namespace std;

class Reception{
    public:
        void welcome(string name){
            cout<<"Welcome "<<name;
        }
        void welcome(string name, string department){
            cout<<"Welcome "<<name<<" to "<<department;
        }
};

int main(){
    int choice;
    string name, department;
    Reception reception;
    cout<<"1. Name only\n2. Name and department\nEnter choice: ";
    cin>>choice;
    if (choice==1){
        cout<<"Enter visitor name: ";
        cin>>name;
        reception.welcome(name);
    } else if(choice == 2){
        cout<<"Enter visitor name: ";
        cin>>name;
        cout<<"Enter department name: ";
        cin>>department;
        reception.welcome(name, department);
    }

}