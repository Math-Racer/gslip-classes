#include <iostream>

int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        std::cout<<"Enter "<<i+1<<" th number: "<<std::endl;
        std::cin>>marks[i];
    }
    std::cout<<"The third mark is "<<marks[2]<<std::endl;
    std::cout<<"The last mark is "<<marks[4];
}