// Average of the first n natural numbers: (1 + 2 + ... + n) / n.
#include <iostream>

int main() {
	int n;
	std::cin >> n;

	if (n <= 0) {
		std::cout << "Enter a positive integer.";
		return 1;
	}

	std::cout << (n + 1) / 2;
	return 0;
}
