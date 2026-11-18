#include <iostream>
using namespace std;

int main(){
    int attendance, marks;
    cout << "Enter your attendance percentage: ";
    cin >> attendance;
    cout << "Enter your marks: ";
    cin >> marks;

    if (attendance >= 90) {
        marks = marks + 5;
    } 
    cout << "Your final marks are: " << marks << endl;
}