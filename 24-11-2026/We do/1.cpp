#include  <iostream>
using namespace std;

struct book{
    int id;
    string name;
    int copies;
};

int main(){
    book sample;
    cout<<"Enter the Book ID: ";
    cin>>sample.id;
    cout<<"\nEnter the Book Name: ";
    cin>>sample.name;
    cout<<"\nEnter the Number of Copies: ";
    cin>>sample.copies;

    cout<<"\nID "<<sample.id<<"\nTitle "<<sample.name<<"\nCopies "<<sample.copies;
}