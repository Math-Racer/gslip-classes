
#include <iostream>
using namespace std;

class GardenPlot {
private:
    int length;
    int width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    GardenPlot plot1, plot2;
    int l, w;

    cout << "Enter the length of Plot 1 in metres: ";
    cin >> l;
    cout << "Enter the width of Plot 1 in metres: ";
    cin >> w;
    plot1.setDimensions(l, w);

    cout << "Enter the length of Plot 2 in metres: ";
    cin >> l;
    cout << "Enter the width of Plot 2 in metres: ";
    cin >> w;
    plot2.setDimensions(l, w);

    cout << "Plot 1 perimeter: " << plot1.perimeter() << " metres" << endl;
    cout << "Plot 2 perimeter: " << plot2.perimeter() << " metres" << endl;

    return 0;
}
