#include <iostream>
using namespace std;

int twice(int amount);
double twice (double amount);

int main(){
    int a;
    double b;
    cin>>a>>b;
    int twice_results_1 = twice(a);
    double twice_results_2 = twice(b);
    cout<<endl<<twice_results_1<<" "<<twice_results_2;
}

int twice(int amount){
    return amount*2;
}

double twice(double amount){
    return amount*2;
}