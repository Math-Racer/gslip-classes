
#include <iostream>
#include <cmath>
using namespace std;

int squareRoot(int area){
    return sqrt(area);
}

int main(){
    int area;
    cout<<"Enter the area : ";
    cin>>area;
    
    cout<<squareRoot(area);
    return 0;
}