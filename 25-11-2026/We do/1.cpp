#include <iostream>
using namespace std;

class Person{
    private: 
        string name;
    public:
        void setName(string s){
            name = s;
        }
        void getName(){
            cout<<name;
        }
};

class Instructor : public Person{
    private:
        string subject;
    public:
        void setSubject(string s){
            subject = s;
        }
        void getSubject(){
            cout<<subject;
        }
};

int main(){
    Instructor ravi;
    string s1, s2;
    cout<<"Enter the name: ";
    cin>>s1;
    cout<<"\nEnter the subject: ";
    cin>>s2;
    ravi.setName(s1);
    ravi.setSubject(s2);

    cout<<"\n";
    ravi.getName();
    cout<<" teaches ";
    ravi.getSubject();
    cout<<".";
}