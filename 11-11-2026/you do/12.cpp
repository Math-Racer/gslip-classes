#include <iostream>
using namespace std;

int main() {
    int side = 3;
    int dark = 0;
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            if ((i + j) % 2 == 0) {
                cout << "#";
                dark++;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << "Dark squares = " << dark << endl;
    return 0;
}
