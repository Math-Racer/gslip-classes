#include <iostream>
using namespace std;

void printBadges(int n);

int main()
{
    int n;
    cin >> n;
    printBadges(n);
    return 0;
}

void printBadges(int n)
{
    if (n == 0)
    {
        return;
    }
    printBadges(n - 1);
    cout << n << endl;
}
