#include <iostream>
using namespace std;

int main() {
	int seconds = 7827;
	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	int remainingSeconds = seconds % 60;

    cout << hours << " hours, " << minutes << " minutes, " << remainingSeconds << " seconds" << endl;

	return 0;
}