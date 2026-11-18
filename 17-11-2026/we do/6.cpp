#include <iostream>
using namespace std;

int perimeter(int side);
int perimeter(int length, int width);

int main(){
    int a, b, c;
    int square_perimeter, rectangle_perimeter;
    cin>>a>>b>>c;

    square_perimeter = perimeter(a);
    rectangle_perimeter = perimeter(b, c);
    cout<<square_perimeter<<" "<<rectangle_perimeter;
}

int perimeter(int side){
    return 4*side;
}

int perimeter(int length, int width){
    return 2*(length+width);
}