

#include <iostream>
#include <cstdlib>
using namespace std;

int temperatureGap(int first, int second){
    return  abs(first-second);
}

int main(){
    int first,second;
    cout<<"Enter the First and Second value : ";
    cin >>first>>second;
    cout<<temperatureGap(first,second);
}
