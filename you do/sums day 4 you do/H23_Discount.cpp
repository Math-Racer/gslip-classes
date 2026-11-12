#include <iostream>
#include <iomanip>
#include <string>
#include <initializer_list>
using namespace std;
int main(){
    int bill=2400; cout<<(bill>=2000?bill-bill*15/100:bill);
    cout<<'\n';
    return 0;
}
