#include <iostream>
using namespace std;

void showDemoMarks();

int main() {
    int marks;
    cin >> marks;
    showDemoMarks();
    cout << marks << endl;   // uses marks of main (student's mark)
    return 0;
}

void showDemoMarks() {
    int marks = 50;          // local marks of this function
    cout << marks << endl;   // prints 50
}
