#include <iostream>
using namespace std;

struct Student{
    int rollNo;
    string name;
    int englishMarks;
    int mathsMarks;
    int scienceMarks;
    int total;
    float average;
};

int main(){
    Student nskStudents[3];
    for(int i=0;i<3;i++){
        cout<<endl<<"Enter roll number: ";
        cin>>nskStudents[i].rollNo;
        cout<<"Enter name: ";
        cin>>nskStudents[i].name;
        cout<<endl<<"Enter english Marks: ";
        cin>>nskStudents[i].englishMarks;
        cout<<endl<<"Enter maths Marks: ";
        cin>>nskStudents[i].mathsMarks;
        cout<<endl<<"Enter science Marks: ";
        cin>>nskStudents[i].scienceMarks;
        nskStudents[i].total = nskStudents[i].englishMarks + nskStudents[i].mathsMarks + nskStudents[i].scienceMarks;
        nskStudents[i].average = nskStudents[i].total/3;
         

    }
    int search;
    cout<<endl<<"Enter roll number";
    cin>>search;
    cout<<endl<<"Details of that student is: ";

    cout<<endl<<"Name: "<<nskStudents[search].name;
    cout<<endl<<"english: "<<nskStudents[search].englishMarks;
    cout<<endl<<"maths: "<<nskStudents[search].mathsMarks;
    cout<<endl<<"science: "<<nskStudents[search].scienceMarks;
    cout<<endl<<"average: "<<nskStudents[search].average;
}