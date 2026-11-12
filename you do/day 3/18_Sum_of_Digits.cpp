#include <iostream>
#include <iomanip>
#include <string>
#include <initializer_list>
using namespace std;
int main(){
    int n=7351; cout<<n/1000+n/100%10+n/10%10+n%10;
    cout<<'\n';
    return 0;
}
