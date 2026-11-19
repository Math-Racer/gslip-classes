#include <iostream>
using namespace std;

void searchIDs(int target) {
    int ids[6] = {21, 35, 21, 44, 21, 50};
    int matches = 0;

    cout << "Target " << target << ": ";
    for (int i = 0; i < 6; i++) {
        if (ids[i] == target) {
            cout << i << " ";
            matches++;
        }
    }

    if (matches == 0) {
        cout << "Not found";
    }

    cout << endl << "Match count: " << matches << endl;
}

int main() {
    searchIDs(21);
    searchIDs(99);

    return 0;
}
