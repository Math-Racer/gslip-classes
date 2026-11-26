#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
    public:
        Person(string s){
            name = s;
        }
};

class Student : public Person{
    protected:
        int roll;
    public:
        Student(string s, int r) : Person(s){
            roll = r; 
        }
};

class AssessmentReport : public Student{
    private:
        int mark1, mark2;
    public:
        AssessmentReport(string s, int r, int m1, int m2) : Student(s, r){
            mark1 = m1;
            mark2 = m2;
        } 
        void display(){
            cout<<name<<" | "<<roll<<" | "<<mark1+mark2;
        } 
};

int main(){
    string s1;
    int n1, n2, n3;
    cout<<"Enter the name: ";
    cin>>s1;
    cout<<"\nEnter the roll: ";
    cin>>n1;
    cout<<"\nEnter theory marks: ";
    cin>>n2;
    cout<<"\nEnter lab marks: ";
    cin>>n3;
    AssessmentReport a(s1, n1, n2, n3);
    a.display();
}
