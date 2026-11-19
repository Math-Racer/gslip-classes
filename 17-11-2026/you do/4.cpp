#include <iostream>
using namespace std;

int area(int side);
int area(int length, int width);

int main()
{
    int side, length, width;
    cin >> side >> length >> width;
    cout << area(side) << " " << area(length, width);
    return 0;
}

int area(int side)
{
    return side * side;
}

int area(int length, int width)
{
    return length * width;
}
