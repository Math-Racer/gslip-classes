
#include <iostream>

int main() {
    int maths = 82, science = 91, english = 77;

    double avg1 = (maths + science + english) / 3;
    double avg2 = (maths + science + english) / 3.0;
	std::cout << "Marks in int: " << avg1 << std::endl;
	std::cout << "Marks in double: " << avg2 << std::endl;
	return 0;
}
