#include <iostream>
using namespace std;

int main(){
    char array[3][3];
    
    for (int i = 0; i<3;i++){

        for (int j=0;j<i+1;j++){
            array[i][j] = '*';
        }
    }    
    for (int i = 0; i<3;i++){
        for (int j=0;j<i+1;j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<"\n";
    }
}