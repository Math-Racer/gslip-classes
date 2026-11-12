#include <iostream>
#include <iomanip>

int main() {
    const int startTime = 2 * 60 + 12;
    const int endTime = 3 * 60 + 15;

    for (int currentTime = startTime; currentTime <= endTime; ++currentTime) {
        const int minutes = currentTime / 60;
        const int seconds = currentTime % 60;

        std::cout << minutes << ':' << std::setfill('0') << std::setw(2)
                  << seconds << '\n';
    }

    return 0;
}