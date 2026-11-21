#include <iostream>
#include <string>
using namespace std;

int main() {
    string label;
    cin >> label;

    label.insert(label.length(), "S");
    cout << label << endl;

    label.erase(label.length() - 1, 1);
    cout << label << endl;

    label.replace(0, 1, "B");
    cout << label << endl;
    return 0;
}
