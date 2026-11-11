#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int product;
    for(int i=1; i <=10; i++){
    product = i*n;
    printf("%d x %d = %d\n", i, n, product);
    }
}