#include <iostream>
using namespace std;

int searchLocker(int lockers[], int n){
    for(int i=0;i<5;i++){
        if(lockers[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    int lockers[5] = {14, 27, 31, 27, 42};
    int result1 = searchLocker(lockers, 27);
    int result2 = searchLocker(lockers, 99);
    if (result1 != -1){
        cout<<result1;
    } else{
        cout<<"Not found"<<endl;
    }
    if (result2 != -1){
        cout<<result2;
    } else{
        cout<<"Not found"<<endl;
    }
}