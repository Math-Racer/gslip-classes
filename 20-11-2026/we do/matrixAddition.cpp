#include <iostream>
using namespace std;

int main(){
    int matrix_1[3][3];
    int matrix_2[3][3];
    int matrix_sum[3][3];

    for (int rowIndex = 0; rowIndex<3;rowIndex++){
        cout<<"Enter 1st matrix "<<rowIndex+1<<"th row:";
        for (int columnIndex = 0; columnIndex<3; columnIndex++){
            cin>>matrix_1[rowIndex][columnIndex];
        }
    }

    for (int rowIndex = 0; rowIndex<3;rowIndex++){
        cout<<"Enter 2nd matrix "<<rowIndex+1<<"th row:";
        for (int columnIndex = 0; columnIndex<3; columnIndex++){
            cin>>matrix_2[rowIndex][columnIndex];
        }
    }
    for (int rowIndex = 0; rowIndex<3;rowIndex++){
        for (int columnIndex = 0; columnIndex<3; columnIndex++){
            matrix_sum[rowIndex][columnIndex] = matrix_1[rowIndex][columnIndex] + matrix_2[rowIndex][columnIndex];
        }
    }    
    for (int rowIndex = 0; rowIndex<3;rowIndex++){
    for (int columnIndex = 0; columnIndex<3; columnIndex++){
        cout<<matrix_sum[rowIndex][columnIndex]<<"\t";
    }
    cout<<"\n";
}    
}