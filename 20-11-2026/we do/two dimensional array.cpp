#include <iostream>
using namespace std;

int main(){
    int classRoomSeatingArrangement[3][3];
    int counter = 1;
    for (int rowIndex = 0; rowIndex<3;rowIndex++){
        for (int columnIndex = 0; columnIndex<3; columnIndex++){
            classRoomSeatingArrangement[rowIndex][columnIndex] = counter;
            counter++;
        }
    }
    for (int rowIndex = 0; rowIndex<3;rowIndex++){
        for (int columnIndex = 0; columnIndex<3; columnIndex++){
            cout<<classRoomSeatingArrangement[rowIndex][columnIndex]<<"\t";
        }
        cout<<"\n";
    }    
}