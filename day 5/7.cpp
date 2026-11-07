// check whether a person is eligible to vote.
#include <iostream>

int main() {
	int age;
	std::cin >> age;

	if (age >= 18) {
		std::cout << "Eligible to vote";
	} else {
		std::cout << "Not eligible to vote";
	}

	return 0;
}
