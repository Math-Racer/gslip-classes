#include <iostream>
using namespace std;

int main(){
    int records[5];
    int sum =0;
    int *ptr;
    for(int i=0;i<5;i++){
        cin>>records[i];
    }
    ptr = records;
    for (int j = 0; j<5; j++){
        sum+= *(ptr+j);
    }
    cout<<endl<<sum;
}