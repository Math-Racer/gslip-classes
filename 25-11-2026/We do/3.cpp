#include <iostream>
using namespace std;

class Employee{
    private:
        int phone;
    public:
        Employee(int p){
            phone = p;
        }
        int getPhone(){
            return phone;
        }
};

class Technian : public Employee{
    private:
        string role;
    public:
        Technian(int p, string s): Employee(p) {
            role = s;
        }
        void display(){
            cout<<role<<": "<<this->getPhone();
        }

};

int main(){
    int p;
    string s;
    cout<<"Enter the phone number: ";
    cin>>p;
    cout<<"\nEnter the role: ";
    cin>>s;
    Technian t(p, s);
    t.display();
}