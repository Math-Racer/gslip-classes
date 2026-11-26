#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

class Participant : public Person {
private:
    int regNo;
public:
    Participant(string n, int r) : Person(n) {
        regNo = r;
    }
    void display() {
        cout << getName() << " | Registration " << regNo << endl;
    }
};

int main() {
    string name;
    int regNo;

    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the registration number: ";
    cin >> regNo;

    Participant p(name, regNo);
    p.display();

    return 0;
}
