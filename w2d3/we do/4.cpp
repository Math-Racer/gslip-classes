#include <iostream>

int main(){
    int readings[5];
    for (int i = 0;i<5;i++){
        std::cin>>readings[i];
    }
    for(int j=0;j<5;j++){
        std::cout<<readings[j]<<" ";
    }
}