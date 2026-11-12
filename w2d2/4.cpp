#include <iostream>
using namespace std;

int main(){
    int population;
    cout<<"enter initial population"<<endl;
    cin>>population;

    int hour=0;
    int target;
    cout<<"enter target"<<endl;
    cin>>target;

    while(population<target){
        population *= 2;
        hour++;
    }
    cout<<"time is "<<hour<<endl;
    cout<<"population is "<<population;
}