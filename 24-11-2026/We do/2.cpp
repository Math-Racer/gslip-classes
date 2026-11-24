#include  <iostream>
using namespace std;

class employee{
    public:
        int id;
        string name;
        string dept;
    public: void displayCard(){
        cout<<"\nID "<<id<<"\nTitle "<<name<<"\nDepartment "<<dept;
    }
};

int main(){
    employee sample;
    cout<<"Enter the employee ID: ";
    cin>>sample.id;
    cout<<"\nEnter the employee Name: ";
    cin.ignore();
    getline(cin,sample.name);
    cout<<"\nEnter the department: ";
    cin>>sample.dept;

    sample.displayCard();
}