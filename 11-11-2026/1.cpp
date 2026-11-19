#include <iostream>

int main(){
    int n;
    std::cin>>n;
    for (int i=1;i<n+1;i++){
        std::cout<<i*4<<std::endl;
    }
    std::cout<<4*n*(n+1)/2;
}