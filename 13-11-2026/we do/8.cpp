#include <iostream>
using namespace std;

int main(){
    int n = 72;
    int numbers[6] = {41, 72, 15, 72, 60, 72};
    int result[6];
    int current = 0;
    for(int i=0;i<6;i++){
        if(numbers[i] == n){
            result[current] = i;
            current++;
        }
    }
    for (int i = 0; i<current;i++){
        cout<<result[i]<<" ";
    }
    if(current==0){
        cout<<"Not found";
    }
    cout<<"Count: "<<current;
}