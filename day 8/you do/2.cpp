#include <iostream>
using namespace std;

void updateScore(int index, int newScore) {
    int scores[5] = {55, 72, 68, 91, 83};

    if (index < 0 || index >= 5) {
        cout << "Invalid index" << endl;
        return;
    }

    scores[index] = newScore;

    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
}

int main() {
    updateScore(2, 76);
    updateScore(5, 60);

    return 0;
}
