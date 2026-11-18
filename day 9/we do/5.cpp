#include <iostream>

int main() {
	int counts[5];

	for (int i = 0; i < 5; ++i) {
		std::cin >> counts[i];
	}

	for (int i = 0; i < 5; ++i) {
		if (i > 0) {
			std::cout << ' ';
		}
		std::cout << counts[i];
	}

	return 0;
}
