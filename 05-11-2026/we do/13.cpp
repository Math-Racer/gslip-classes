#include <iostream>

int main() {
	int celsius = 37;

	int fahrenheitUsing9 = celsius * 9 / 5 + 32;
	double fahrenheitUsing9Point0 = celsius * 9.0 / 5 + 32;

	std::cout << "Using 9: " << fahrenheitUsing9 << "\n";
	std::cout << "Using 9.0: " << fahrenheitUsing9Point0 << "\n";

	return 0;
}
