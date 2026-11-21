#include <iostream>
using namespace std;

int main() {
    int limit = 35;
    int count = 0;
    for (int i = 10; i <= limit; i++) {
        int last = i % 10;
        int temp = i;
        while (temp >= 10) {
            temp = temp / 10;
        }
        int first = temp;
        if (first == last) {
            cout << i << endl;
            count++;
        }
    }
    cout << "Matches = " << count << endl;
    return 0;
}
