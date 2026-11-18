 #include <iostream>
using namespace std;

int main() {
	int attendance[5];

	for (int i = 0; i<5; i++) {
		cin >> count;
	}
	int correctedCount;
	cin >> correctedCount;
	attendance[2] = correctedCount;

	for (int i = 0; i < 5; ++i) {
		if (i > 0) cout << ' ';
		cout << attendance[i];
	}
	return 0;
}
