#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n;
    }
};

class Student : public Person {
protected:
    int id;
public:
    Student(string n, int i) : Person(n) {
        id = i;
    }
};

class ScholarshipStudent : public Student {
private:
    int award;
public:
    ScholarshipStudent(string n, int i, int a) : Student(n, i) {
        award = a;
    }
    void display() {
        cout << name << " | ID " << id << " | Award Rs " << award << endl;
    }
};

int main() {
    string name;
    int id, award;

    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the student ID: ";
    cin >> id;
    cout << "Enter the award in rupees: ";
    cin >> award;

    ScholarshipStudent s(name, id, award);
    s.display();

    return 0;
}
