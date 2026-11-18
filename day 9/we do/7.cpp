#include <iostream>
using namespace std;

int searchArray(int numbers[], int n){
    for(int i=0;i<6;i++){
        if(numbers[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    int numbers[6] = {41, 72, 15, 72, 60, 72};
    int result1 = searchArray(numbers, 72);
    if (result1 != -1){
        cout<<result1;
    } else{
        cout<<"Not found"<<endl;
    }
}