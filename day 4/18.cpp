#include <iostream>
using namespace std;

int main() {
	int code = 4627;
    int digit_1 = code / 1000;
    int digit_2 = (code / 100) % 10;
    int digit_3 = (code / 10) % 10;
    int digit_4 = code % 10;

	int sum = digit_1 + digit_2 + digit_3 + digit_4;
	cout << sum << endl;

	return 0;
}