#include <iostream>
using namespace std;

class Equipment {
protected:
    int code;
public:
    Equipment(int c) {
        code = c;
    }
};

class Generator : public Equipment {
private:
    int rating;
public:
    Generator(int c, int r) : Equipment(c) {
        rating = r;
    }
    void display() {
        cout << "Generator " << code << ": " << rating << " kW" << endl;
    }
};

class Pump : public Equipment {
private:
    int rating;
public:
    Pump(int c, int r) : Equipment(c) {
        rating = r;
    }
    void display() {
        cout << "Pump " << code << ": " << rating << " L/min" << endl;
    }
};

int main() {
    int gCode, gRating, pCode, pRating;

    cout << "Enter the generator code: ";
    cin >> gCode;
    cout << "Enter the generator rating: ";
    cin >> gRating;
    cout << "Enter the pump code: ";
    cin >> pCode;
    cout << "Enter the pump rating: ";
    cin >> pRating;

    Generator g(gCode, gRating);
    Pump p(pCode, pRating);

    g.display();
    p.display();

    return 0;
}
