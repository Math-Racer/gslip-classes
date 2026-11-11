// Find the greatest among three numbers using nested if statements.
#include <iostream>

int main() {
	double first, second, third;
	std::cin >> first >> second >> third;

	double greatest;
	if (first >= second) {
		if (first >= third) {
			greatest = first;
		} else {
			greatest = third;
		}
	} else {
		if (second >= third) {
			greatest = second;
		} else {
			greatest = third;
		}
	}

	std::cout << greatest << std::endl;
	return 0;
}
