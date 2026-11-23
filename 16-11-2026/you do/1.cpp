#include <iostream>
using namespace std;

int previewTicketPrice(int price);

int main() {
    int price;
    cin >> price;
    int preview = previewTicketPrice(price);
    cout << price << " " << preview << endl;
    return 0;
}

int previewTicketPrice(int price) {
    price = price + 20;
    return price;
}
