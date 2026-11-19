#include <iostream>
using namespace std;

int main(){
    int firstNumber = 48, secondNumber = 18;
    while(secondNumber!=0){
        int temp = firstNumber%secondNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }
    cout<<firstNumber;
}