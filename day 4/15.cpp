// a bike rental allows riders aged 18 or older who hold a license. ravi is 17 and holds a license . write the condiction with age and haslicene and find its value
#include <iostream>

int main() {
	int age = 17;
	bool hasLicense = true;

	bool canRent = (age >= 18) && hasLicense;
	std::cout << std::boolalpha << canRent << '\n';

	return 0;
}
