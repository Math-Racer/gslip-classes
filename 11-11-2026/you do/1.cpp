#include <iostream>
using namespace std;

int main() {
    int guests = 4;
    int count = 0;
    for (int i = 1; i <= guests; i++) {
        cout << i << endl;
        count++;
    }
    cout << "Badges = " << count << endl;
    return 0;
}
