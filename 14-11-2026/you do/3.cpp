#include <iostream>
#include <string>
using namespace std;

int main() {
    string sign;
    getline(cin, sign);
    int count = 0;
    for (int i = 0; i < sign.length(); i++) {
        if (sign[i] == 'e') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
