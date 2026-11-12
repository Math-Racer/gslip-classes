#include <iostream>
#include <iomanip>
#include <string>
#include <initializer_list>
using namespace std;
int main(){
    int s=5000; cout<<s/3600<<" h "<<s%3600/60<<" m "<<s%60<<" s";
    cout<<'\n';
    return 0;
}
