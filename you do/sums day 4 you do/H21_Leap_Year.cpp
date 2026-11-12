#include <iostream>
#include <iomanip>
#include <string>
#include <initializer_list>
using namespace std;
int main(){
    int y=1900; cout<<boolalpha<<((y%4==0&&y%100!=0)||y%400==0);
    cout<<'\n';
    return 0;
}
