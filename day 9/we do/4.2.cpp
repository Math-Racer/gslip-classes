#include <iostream>

int main(){
    int marks[5] = {70,45, 95, 60, 80};
    int query;
    std::cout<<"What value you want? (1-5) ";
    std::cin>>query;
    std::cout<<"The "<<query<<" th mark is "<<marks[query-1]<<std::endl;
}