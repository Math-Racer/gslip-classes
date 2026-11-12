#include <iostream>

using namespace std;
int main(){
    int attendance[5] = {28, 31, 26, 30, 29};
    attendance[2] = 32;
    for(int i=0; i<5; i++){
        cout<<attendance[i]<<" ";
    }

}