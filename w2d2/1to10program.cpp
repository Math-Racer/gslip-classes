#include <iostream>

int main(){
    int n=0;
    for(int i = 0; i<11;i++){
        if (i%5){
            continue;
        }

        std::cout<<i<<std::endl;
    }
}