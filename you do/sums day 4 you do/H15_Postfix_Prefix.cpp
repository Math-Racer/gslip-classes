#include <iostream>
#include <iomanip>
#include <string>
#include <initializer_list>
using namespace std;
int main(){
    int stock=30; int sold=stock-- -4; int left=--stock+sold; cout<<stock<<" "<<sold<<" "<<left;
    cout<<'\n';
    return 0;
}
