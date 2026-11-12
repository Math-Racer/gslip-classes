#include <iostream>

using namespace std;

int main(){
    int count_even = 0, sum_odd = 0;
    for(int i=1;i<11;i++){
        if (i%2==0){
            count_even++;
        }
        else if (i%2!=0){
            sum_odd += i*i;
        }

    }
            cout<<"count even"<<count_even;
        cout<<"sum_odd"<<sum_odd;
}