#include <iostream>
using namespace std;

int main(){
    int array[3][3];
    
    for (int i = 0; i<3;i++){
        int counter = 1;
        for (int j=0;j<i+1;j++){
            array[i][j] = counter;
            counter++;
        }
    }    
    for (int i = 0; i<3;i++){

        for (int j=0;j<i+1;j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<"\n";
    }
}