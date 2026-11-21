// a bike rental allows riders aged 18 or older who hold a license. ravi is 17 and holds a license . write the condiction with age and haslicene and find its value
#include <iostream>

int main() {
	int age;
	bool hasLicense;


	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << "Do you have a license? (1 for yes, 0 for no): ";
	std::cin >> hasLicense;

	bool canRent = (age >= 18) && hasLicense;
	std::cout << std::boolalpha << canRent << '\n';

	return 0;
}
