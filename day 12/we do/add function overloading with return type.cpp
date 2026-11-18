#include <iostream>
using namespace std;

int add(int a, int b){
    int c = a+b;
    return c;
}

void add(int a, int b, int c){
    int d = a+b+c;
    return d;
}


int main(){
    int result1, result2;
    result1 = add(10, 12);
    result2 = add(10, 5, 4);
    cout<<"The result of two variables: "<<result1;
    cout<<"The result of three variables: "<<result2;
    return 0;
}