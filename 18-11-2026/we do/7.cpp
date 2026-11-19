#include <iostream>
using namespace std;

int main(){
    int values[4];
    int *ptr;
    ptr = values;
    int search;
    
    for (int i = 0;i<4;i++){
        cin>>ptr[i];
    }
    cin>>search;
    
    // for (int i = 0;i<4;i++){
    //     if(i == search){
    //         cout<<ptr[i];
    //     }

    // }
    cout<<*(ptr+search);
}