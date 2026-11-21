
#include <iostream>
using namespace std;

int addScores(int first , int second){
    return first+second;
}

int main(){
    int first,second;
    cout<<"Enter the first Number : ";
    cin>>first;
    cout<<"Enter the second Number : ";
    cin>>second;
    cout<<addScores(first,second);
    return 0;
}