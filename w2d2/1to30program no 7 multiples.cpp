#include <iostream>

int main(){
    int n=0;
    for(int i = 0; i<31;i++){
        if(i%7){
            continue;
        }
        std::cout<<i<<std::endl;
    }
}