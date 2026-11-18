#include <iostream>
using namespace std;

int main(){
    int n = 72;
    int numbers[6] = {41, 72, 15, 72, 60, 72};
    int result;
    bool found = false;
    for(int i=0;i<6;i++){
        if(numbers[i] == n){
            result = i;
            found = true;
            break;
        }
    }
    if(found==true){
        cout<<result+1<<" th position";
    } else{
        cout<<"Not found"<<endl;
    }
}