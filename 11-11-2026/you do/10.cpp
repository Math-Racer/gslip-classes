#include <iostream>
using namespace std;

int main() {
    int lanes = 5;
    int total = 0;
    for (int i = 1; i <= lanes; i++) {
        int marker = i * 3;
        cout << marker << endl;
        total = total + marker;
    }
    cout << "Marker total = " << total << endl;
    return 0;
}
